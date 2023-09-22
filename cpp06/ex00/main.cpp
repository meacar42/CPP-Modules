#include "ScalarConverter.hpp"


int main(int ac,char** ag)
{
	if(ac == 2)
	{
		std::string str = ag[1];
		ScalarConverter::convert(str);
	}
	else
		std::cout << "Wrong Argument" << std::endl;
	return 0;
}