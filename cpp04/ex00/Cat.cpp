#include "Cat.hpp"

Cat::Cat(void) 
{
	this->type = "Cat";
	std::cout<< "cat constructer"<<std::endl;
}

Cat::Cat(Cat const &instance)
{
	*this = instance;
}

Cat::~Cat(void)
{
		std::cout<<"cat destructor"<<std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

std::string Cat::getType() const 
{
	return(this->type);
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->type = rhs.type;
	return(*this);
}