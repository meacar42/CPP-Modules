#include "easyfind.hpp"
#include <iostream>

int	main(void)
{
	std::vector<int> arr;

	int i;
	try
	{
		
		arr.push_back(10);
		arr.push_back(20);
		arr.push_back(30);
		i = easyfind(arr,20);
		std::cout<< i << std::endl;
		
	}
	catch(ElementNot& e)
	{
		std::cout<< e.what()<<std::endl;
	}
	
}