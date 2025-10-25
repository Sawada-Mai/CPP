#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

#define BRAIN_PREFIX "Brain: "

class Brain {
 private:
  std::string ideas_[100];

 public:
  Brain();
  Brain(const Brain& other);
  Brain& operator=(const Brain& other);
  ~Brain();

  void SetIdeas(const int index, const std::string& str);
  const std::string& GetIdeas(const int index) const;
};

#endif
