#!/bin/bash

make re

echo
echo "===== ✅ VALID CASES ====="

echo
echo './RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"'
./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"

echo
echo './RPN "7 7 * 7 -"'
./RPN "7 7 * 7 -"

echo
echo './RPN "1 2 * 2 / 2 * 2 4 - +"'
./RPN "1 2 * 2 / 2 * 2 4 - +"

echo
echo './RPN "7"  # 単一の数字'
./RPN "7"

echo
echo "===== ❌ ERROR CASES ====="

echo
echo './RPN "(1 + 1)"  # 括弧あり'
./RPN "(1 + 1)"

echo
echo './RPN "1 2 3 +"  # 中途半端'
./RPN "1 2 3 +"

echo
echo './RPN "1 +"'
./RPN "1 +"

echo
echo './RPN "1 0 /"  # 0除算'
./RPN "1 0 /"

echo
echo './RPN "8  9 *"  # 連続スペース'
./RPN "8  9 *"
echo
