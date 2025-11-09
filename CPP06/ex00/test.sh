echo "----------- subject ----------------"

echo "\n./convert 0"
./convert 0
echo "\nchar: Non displayable"
echo "int: 0"
echo "float: 0.0f"
echo "double: 0.0"

echo "---------------------------"

echo "\n./convert nan"
./convert nan
echo "\nchar: impossible"
echo "int: impossible"
echo "float: nanf"
echo "double: nan"

echo "---------------------------"

echo "\n./convert 42.0f"
./convert 42.0f
echo "\nchar: '*'"
echo "int: 42"
echo "float: 42.0f"
echo "double: 42.0"


echo "\n\n------------ normal number ---------------"

echo "\n./convert 42"
./convert 42
echo "\nchar: '*'"
echo "int: 42"
echo "float: 42.0f"
echo "double: 42.0"

echo "---------------------------"

echo "\n./convert -42"
./convert -42
echo "\nchar: Non displayable"
echo "int: -42"
echo "float: -42.0f"
echo "double: -42.0"

echo "---------------------------"

echo "\n./convert 4.2"
./convert 4.2
echo "\nchar: Non displayable"
echo "int: 4"
echo "float: 4.2f"
echo "double: 4.2"


echo "\n\n------------- float --------------"

echo "\n./convert -4.2f"
./convert -4.2f
echo "\nchar: Non displayable"
echo "int: -4"
echo "float: -4.2f"
echo "double: -4.2"

echo "---------------------------"

echo "\n./convert 0.0f"
./convert 0.0f
echo "\nchar: Non displayable"
echo "int: 0"
echo "float: 0.0f"
echo "double: 0.0"

echo "---------------------------"

echo "\n./convert 99999999.0f"
./convert 99999999.0f
echo "\nchar: impossible"
echo "int: 99999999"
echo "float: 100000000.0f"
echo "double: 100000000.0"


echo "\n\n------------ pseudo float/double ---------------"

echo "\n./convert +inff"
./convert +inff
echo "\nchar: impossible"
echo "int: impossible"
echo "float: +inff"
echo "double: +inf"

echo "---------------------------"

echo "\n./convert -inff"
./convert -inff
echo "\nchar: impossible"
echo "int: impossible"
echo "float: -inff"
echo "double: -inf"

echo "---------------------------"

echo "\n./convert +inf"
./convert +inf
echo "\nchar: impossible"
echo "int: impossible"
echo "float: +inff"
echo "double: +inf"

echo "---------------------------"

echo "\n./convert -inf"
./convert -inf
echo "\nchar: impossible"
echo "int: impossible"
echo "float: -inff"
echo "double: -inf"

echo "---------------------------"

echo "\n./convert nanf"
./convert nanf
echo "\nchar: impossible"
echo "int: impossible"
echo "float: nanf"
echo "double: nan"


echo "\n\n------------ int overflow ---------------"

echo "\n./convert 2147483648"
./convert 2147483648
echo "\nchar: impossible"
echo "int: impossible"
echo "float: 2147483648.0f"
echo "double: 2147483648.0"

echo "---------------------------"

echo "\n./convert -2147483649"
./convert -2147483649
echo "\nchar: impossible"
echo "int: impossible"
echo "float: -2147483649.0f"
echo "double: -2147483649.0"

echo "---------------------------"

echo "\n./convert 99999999999999999999999"
./convert 99999999999999999999999
echo "\nchar: impossible"
echo "int: impossible"
echo "float: 1e+23f"
echo "double: 1e+23"


echo "\n\n------------- char --------------"

echo "\n./convert a"
./convert a
echo "\nchar: 'a'"
echo "int: 97"
echo "float: 97.0f"
echo "double: 97.0"

echo "---------------------------"

echo "\n./convert 'a'"
./convert 'a'
echo "\nchar: 'a'"
echo "int: 97"
echo "float: 97.0f"
echo "double: 97.0"

echo "---------------------------"

echo "\n./convert ~"
./convert '~'
echo "\nchar: '~'"
echo "int: 126"
echo "float: 126.0f"
echo "double: 126.0"

echo "---------------------------"

echo "\n./convert '\n'"
./convert "
"
echo "\nchar: Non displayable"
echo "int: 10"
echo "float: 10.0f"
echo "double: 10.0"


echo "\n\n------------- string --------------"

echo "\n./convert abc"
./convert abc
echo "\nchar: impossible"
echo "int: impossible"
echo "float: impossible"
echo "double: impossible"

echo "---------------------------"

echo "\n./convert 4.2.1"
./convert 4.2.1
echo "\nchar: impossible"
echo "int: impossible"
echo "float: impossible"
echo "double: impossible"

echo "---------------------------"

echo "\n./convert f42"
./convert f42
echo "\nchar: impossible"
echo "int: impossible"
echo "float: impossible"
echo "double: impossible"
