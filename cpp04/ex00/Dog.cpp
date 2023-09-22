#include "Dog.hpp"


Dog::Dog(void)
{
	this->type = "Dog";
	std::cout<< "Dog constructer"<<std::endl;
}

Dog::Dog(Dog const &instance)
{
	*this = instance;
}

Dog& Dog::operator=(Dog const &rhs)
{
	this->type = rhs.type;
	return(*this);
}

Dog::~Dog(void)
{
	std::cout<< "Dog constructor"<<std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Haw Haw" << std::endl;
}

std::string Dog::getType() const
{
	return(this->type);
}
