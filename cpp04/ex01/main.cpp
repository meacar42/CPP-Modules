#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"



int main()
{
 
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;
delete i;

Dog *a = new Dog();
	
delete a;
	
	const Animal	*(animal_array[4]);
	std::cout << std::endl;
	
	
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
		
	std::cout << std::endl;


	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;


	// for (int i = 0; i < 4; i++)
	// 	delete animal_array[i];
	// std::cout << std::endl;
 

	return 0;
	
}



