// Copyright 2025 msawada

#include <fstream>
#include <string>
#include <sstream>
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
  if (argc != 4) {
    std::cerr << "./replace <filename> <s1> <s2>" << std::endl;
    return 1;
  }
  std::ifstream ifs(argv[1]);
  if (!ifs) {
    std::cerr << "Error: input_file can not open." << std::endl;
    return 1;
  }
  std::string output_name = std::string(argv[1])+ ".replace";
  std::ofstream ofs(output_name.c_str());
  if (!ofs) {
    std::cerr << "Error: output_file can not open." << std::endl;
    return 1;
  }
  std::stringstream buf;
  buf << ifs.rdbuf();
  ofs << ReplaceLine(buf.str(), argv[2], argv[3]);
  ifs.close();
  ofs.close();
  return 0;
}
