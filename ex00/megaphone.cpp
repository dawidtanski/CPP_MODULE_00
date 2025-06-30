#include <iostream>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	std::string result(strlen(argv[1]), '\0');
	for (size_t i = 0; i < strlen(argv[1]); i++)
	{
		if (std::islower(argv[1][i]))
			result[i] = std::toupper(argv[1][i]);
		else
			result[i] = argv[1][i];
	}
	std::cout << result << "\n";
}