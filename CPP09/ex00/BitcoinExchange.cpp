// Copyright 2025 msawada

#include <iostream>
#include <map>
#include <string>
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
  //*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
  if (this != &other) {
  }
  return *this;
}

BitcoinExchange::~BitcoinExchange() {
}

bool btc(std::string& file) {
  std::map<std::string, double> data_map;

  if (!LoadDataBase(data_map)) {
    return false;
  }

  std::string str;
  while (getline(ifs, str)) {
    data_map.insert(std::make_pair())
  }

  // std::ofstream ofs(argv[1]);
  // if (!ofs) {
  //   std::cerr << "Error: output_file can not open." << std::endl;
  //   ifs.close();
  //   return false;
  // }




  ifs.close();
  ofs.close();
}
