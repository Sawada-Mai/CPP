// Copyright 2025 msawada

#include <fstream>
#include <string>
#include <iostream>


std::string ReplaceLine(const std::string& line,
    const std::string& s1, const std::string& s2) {
  if (s1.empty() || s2.empty() || s1 == s2)
    return NULL;
  size_t i = 0;
  size_t hit;
  std::string result;
  while ((hit = line.find(s1, i)) != std::string::npos) {
    result += line.substr(i, hit - i);
    result += s2;
    i = hit + s1.size();
  }
  result += line.substr(i);
  return result;
}

int main(int argc, char** argv) {
  std::ifstream ifs("test.txt");
  std::ofstream file("test.replace");
  if (argc != 3) {
    return 1;
  }
  if (!ifs || !file) {
    std::cerr << "Error: file can not open.";
    return 1;
  }
  std::string line;
  std::string str;
  while (std::getline(ifs, line)) {
    str = ReplaceLine(line, argv[1], argv[2]);
  }
  return 0;
}
