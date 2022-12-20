#include <iostream>
#include <cctype>

int main(int argc, const char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (size_t i = 1; argv[i]; i++)
		{
			for (size_t j = 0; j < strlen(argv[i]); j++)
			{
				char c = toupper(argv[i][j]);
				std::cout << c;
			}
		}
		std::cout << std::endl;
	}
}