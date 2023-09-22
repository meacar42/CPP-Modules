#include "Animal.hpp"


Animal::Animal()
{
	this->type = "Animal";
	std::cout<<"ANIMAL constructor"  << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(Animal const &cpy)
{
	*this = cpy;
}

Animal& Animal::operator=(Animal const& cpyop)
{
	this->type = cpyop.type;
	return(*this);
}

void Animal::makeSound() const
{
	std::cout << "I'am a Animal" << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}

