// Copyright 2025 msawada

#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"


int main(void) {
  Data data;

  data.name_ = "testA";
  uintptr_t raw = Serializer::serialize(&data);
  Data* ptr = Serializer::deserialize(raw);
  if (ptr == &data)
    std::cout << ptr->name_ << std::endl;
}
