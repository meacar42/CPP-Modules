#include <iostream>
int main(int ac, char **ag)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; ag[i] != NULL; i++)
			for(int j = 0; ag[i][j] != '\0'; j++)
					std::cout << (char)std::toupper(ag[i][j]);
		std::cout << std::endl;
	}
	return 0;
}