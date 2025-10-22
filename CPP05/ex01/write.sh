#!/bin/bash

CLASS_NAME=$1
UPPER_NAME=$(echo $CLASS_NAME | tr '[:lower:]' '[:upper:]')

# 繝倥ャ繝繝ｼ繝輔ぃ繧､繝ｫ逕滓�
cat > ${CLASS_NAME}.hpp << EOF
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

# 螳溯｣�ヵ繧｡繧､繝ｫ逕滓�
cat > ${CLASS_NAME}.cpp << EOF
#include "${CLASS_NAME}.hpp"

${CLASS_NAME}::${CLASS_NAME}() {

}

${CLASS_NAME}::${CLASS_NAME}(const ${CLASS_NAME}& other) {
  *this = other;
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