#include <iostream>


int main()
{
	std::string A = "MERT";
	std::string *stringPTR = &A;
	std::string &stringREF = A;


	std::cout << "memory address of the string variable : " << &A << std::endl;
	std::cout << "memory address of the stringPTR : " << stringPTR << std::endl;
	std::cout << "memory address of the stringREF : " << &stringREF << std::endl;

	std::cout << "value str : " << A << std::endl;
	std::cout << "value stringPTR : " << *stringPTR << std::endl;
	std::cout << "value stringREF : " << stringREF << std::endl;
}