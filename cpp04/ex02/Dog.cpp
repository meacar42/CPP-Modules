#include "Dog.hpp"

Dog::Dog(void)
{
	this->brain = new Brain();
	this->type = "Dog";
	std::cout<< "Dog constructer"<<std::endl;
}

Dog::Dog(Dog const &instance)
{
	*this = instance;
}

Dog& Dog::operator=(Dog const &rhs)
{
	this->brain = new Brain();
	this->type = rhs.type;
	return(*this);
}

Dog::~Dog(void)
{
	delete brain;
	std::cout<< "Dog destructor"<<std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Haw Haw" << std::endl;
}

std::string Dog::getType() const
{
	return(this->brain->get());
}