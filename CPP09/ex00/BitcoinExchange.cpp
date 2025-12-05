// Copyright 2025 msawada

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::~BitcoinExchange() {
}

void BitcoinExchange::PrintConvertedRate(const std::map<std::string
    , double> &data_map, const std::string& date, double value) {
  std::map<std::string, double>::const_iterator line = data_map.lower_bound(date);

  double result = value;

  if (line != data_map.end() && line->first == date) {
    result *= line->second;
    std::cout << date << " => " << value << " = " << result << std::endl;
    return;
  }
  
  if (line != data_map.begin()) {
    line--;
    result *= line->second;
    std::cout << date << " => " << value << " = " << result << std::endl;
    return;
  } else {
    std::cout << "Error: Not found => " << date << std::endl;
    return;
  }
}

bool BitcoinExchange::StrIsdigit(const std::string& str) {
  int dot_count = 0;
  int num_count = 0;
  size_t i = 0;

  if (str.empty())
    return false;

  if (str[0] == '-' || str[0] == '+')
    i++;

  while (i < str.size()) {
    if (str[i] == '.')
      dot_count++;
    else if (isdigit(str[i]))
      num_count++;
    else
      return false;
    i++;
  }

  if (dot_count > 1)
    return false;
  if (num_count < 1)
    return false;
  return true;
}

bool BitcoinExchange::IsValidDateFormat(const std::string& date) {
  if (date.size() != 10)
    return false;

  if (date[4] != '-' || date[7] != '-')
    return false;

  for (int i = 0; i < 10; i++) {
    if (i == 4 || i == 7)
      continue;
    if (!isdigit(date[i]))
      return false;
  }

  int month = atoi(date.substr(5, 2).c_str());
  int day = atoi(date.substr(8, 2).c_str());

  if (month < 1 || month > 12)
    return false;
  if (day < 1 || day > 31)
    return false;
  return true;
}

void BitcoinExchange::PrintRate(const std::map<std::string, double> &data_map, const std::string &line_input) {
  size_t separator = line_input.find('|');

  if (separator == std::string::npos) {
    std::cout << "Error: bad input => " << line_input << std::endl;
    return;
  }

  size_t left_start = 0;
  while (left_start < line_input.size() && line_input[left_start] == ' ')
    left_start++;

  size_t left_end = separator;
  while (line_input[left_end - 1] == ' ')
    left_end--;
  std::string date = line_input.substr(left_start, left_end - left_start);

  if (!IsValidDateFormat(date)) {
    std::cout << "Error: bad input => " << line_input << std::endl;
    return;
  }

  if (data_map.empty())
    return;

  size_t start = separator + 1;
  while (start < line_input.size() && line_input[start] == ' ')
    start++;

  size_t end = line_input.size() - 1;
  while (end > 0 && line_input[end] == ' ')
    end--;
  std::string number = line_input.substr(start, end - start + 1);


  if (!StrIsdigit(number)) {
    std::cout << "Error: bad input => " << line_input << std::endl;
    return;
  }

  double rate = std::atof(number.c_str());

  if (rate < 0) {
    std::cout << "Error: not a positive number." << std::endl;
    return;
  } else if (rate > 1000) {
    std::cout << "Error: too large a number." << std::endl;
    return;
  }

  PrintConvertedRate(data_map, date, rate);
}

int BitcoinExchange::btc(char* file) {
  std::map<std::string, double> data_map;

  // test.csv read
  std::ifstream ifs("data.csv");
  if (!ifs) {
    std::cerr << "Error: couldn't open data.csv." << std::endl;
    return 0;
  }

  std::string line_db;
  getline(ifs, line_db);

  while (getline(ifs, line_db)) {
    size_t comma = line_db.find(',');
    std::string date = line_db.substr(0, comma);

    double rate = std::atof(line_db.substr(comma + 1).c_str());

    data_map[date] = rate;
  }
  ifs.close();


  // input.txt read
  std::ifstream input(file);
  if (!input) {
    std::cerr << "Error: couldn't open file." << std::endl;
    return 0;
  }

  std::string line_input;
  getline(input, line_input);

  while (getline(input, line_input)) {
    PrintRate(data_map, line_input);
  }
  input.close();

  return 1;
}
