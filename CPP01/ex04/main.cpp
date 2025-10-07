// Copyright 2025 msawada

#include <fstream>
#include <string>
#include <iostream>


std::string ReplaceLine(const std::string& line,
    const std::string& s1, const std::string& s2) {
  if (s1.empty() || s2.empty())
    return "";
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
  if (argc != 3) {
    std::cerr << "./replace <s1> <s2>" << std::endl;
    return 1;
  }
  std::ifstream ifs("test.txt");
  std::ofstream ofs("test.replace");
  if (!ifs || !ofs) {
    std::cerr << "Error: file can not open." << std::endl;
    return 1;
  }
  std::string line;
  while (std::getline(ifs, line)) {
    ofs << ReplaceLine(line, argv[1], argv[2]) << "\n";
  }
  ifs.close();
  ofs.close();
  return 0;
}
