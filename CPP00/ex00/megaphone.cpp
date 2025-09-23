#include <iostream>

static void	print_upper(char* str) {
	while (*str) {
		std::cout << static_cast<char>(std::toupper(*str));
		str++;
	}
}

int	main(int argc, char* argv[])
{
	int i;

	i = 1;
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	while (i < argc) {
		print_upper(argv[i]);
		i++;
	}
	std::cout << '\n';
	return 0;
}
