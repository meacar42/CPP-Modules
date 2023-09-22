#include "Cat.hpp"

Cat::Cat(void) 
{
	this->brain = new Brain();
	this->type = "Cat";
	std::cout<< "cat constructer"<<std::endl;
}

Cat::~Cat(void)
{
		std::cout<<"cat destructor"<<std::endl;
		delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

std::string Cat::getType() const 
{
	return(this->type);
}

Cat::Cat(Cat const &instance)
{
	*this = instance;
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->brain = new Brain();
	this->type = rhs.type;
	return(*this);
}
