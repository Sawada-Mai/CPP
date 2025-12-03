// Copyright 2025 msawada

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
  *this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
  if (this != &other) {
  }
  return *this;
}

BitcoinExchange::~BitcoinExchange() {
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
  return true;
}

void BitcoinExchange::PrintRate(const std::map<std::string, double> &data_map, const std::string &line_input) {
  size_t separator = line_input.find('|');

  if (separator == std::string::npos) {
    std::cerr << "Error: bad input => " << line_input << std::endl;
    return;
  }

  std::string date = line_db.substr(0, separator);
  if (!IsValidDateFormat) {
    std::cerr << "Error: bad input => " << line_input << std::endl;
    return;
  }
}

int BitcoinExchange::btc(char* file) {
  std::map<std::string, double> data_map;

  // test.csv read
  std::ifstream ifs("test.csv");
  if (!ifs) {
    std::cerr << "Error: couldn't open data.csv." << std::endl;
    return 0;
  }

  std::string line_db;
  getline(ifs, line_db);

  while (getline(ifs, line_db)) {
    size_t comma = line_db.find(',');
    std::string date = line_db.substr(0, comma);

    double rate = atof(line_db.substr(comma + 1).c_str());

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
