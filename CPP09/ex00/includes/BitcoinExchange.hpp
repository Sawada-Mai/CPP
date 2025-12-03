// Copyright 2025 msawada

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

class BitcoinExchange {
 private:

 public:
  BitcoinExchange();
  BitcoinExchange(const BitcoinExchange& other);
  BitcoinExchange& operator=(const BitcoinExchange& other);
  ~BitcoinExchange();

  int btc(char* file);
  void PrintRate(const std::map<std::string, double> &data_map, const std::string &line_input);
};

#endif
