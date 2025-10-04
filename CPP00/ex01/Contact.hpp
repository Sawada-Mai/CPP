// Copyright 2025 msawada

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
 private:
  std::string first_name_;
  std::string last_name_;
  std::string nickname_;
  std::string phone_number_;
  std::string darkest_secret_;

 public:
  Contact();
  ~Contact();
  void SetFirstName(const std::string& first_name);
  void SetLastName(const std::string& last_name);
  void SetNickname(const std::string& nickname);
  void SetPhoneNumber(const std::string& phone_number);
  void SetDarkestSecret(const std::string& darkest_secret);
  const std::string& GetFirstName() const;
  const std::string& GetLastName() const;
  const std::string& GetNickname() const;
  const std::string& GetPhoneNumber() const;
  const std::string& GetDarkestSecret() const;
};


#endif
