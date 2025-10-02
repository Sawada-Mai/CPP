// Copyright 2025 msawada

#include <string>
#include "ex01/Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void Contact::SetFirstName(const std::string& first_name) {
  first_name_ = first_name;
}

void Contact::SetLastName(const std::string& last_name) {
  last_name_ = last_name;
}

void Contact::SetNickname(const std::string& nickname) {
  nickname_ = nickname;
}

void Contact::SetPhoneNumber(const std::string& phone_number) {
  phone_number_ = phone_number;
}

void Contact::SetDarkestSecret(const std::string& darkest_secret) {
  darkest_secret_ = darkest_secret;
}


const std::string& Contact::GetFirstName() const {
  return first_name_;
}

const std::string& Contact::GetLastName() const {
  return last_name_;
}

const std::string& Contact::GetNickname() const {
  return nickname_;
}

const std::string& Contact::GetPhoneNumber() const {
  return phone_number_;
}

const std::string& Contact::GetDarkestSecret() const {
  return darkest_secret_;
}
