#!/bin/bash

CLASS_NAME=$1
UPPER_NAME=$(echo $CLASS_NAME | tr '[:lower:]' '[:upper:]')

cat > ${CLASS_NAME}.hpp << EOF
// Copyright 2025 msawada

#ifndef ${UPPER_NAME}_HPP
#define ${UPPER_NAME}_HPP

class ${CLASS_NAME} {
 private:

 public:
  ${CLASS_NAME}();
  ${CLASS_NAME}(const ${CLASS_NAME}& other);
  ${CLASS_NAME}& operator=(const ${CLASS_NAME}& other);
  ~${CLASS_NAME}();
};

#endif
EOF

cat > ${CLASS_NAME}.cpp << EOF
// Copyright 2025 msawada

#include "${CLASS_NAME}.hpp"

${CLASS_NAME}::${CLASS_NAME}() {

}

${CLASS_NAME}::${CLASS_NAME}(const ${CLASS_NAME}& other) {
  //*this = other;
}

${CLASS_NAME}& ${CLASS_NAME}::operator=(const ${CLASS_NAME}& other) {
  if (this != &other) {
  }
  return *this;
}

${CLASS_NAME}::~${CLASS_NAME}() {

}
EOF

echo "Class ${CLASS_NAME} created successfully!"