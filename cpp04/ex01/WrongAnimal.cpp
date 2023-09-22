#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "wronganimal";
	std::cout<<"wrong animal constructor"<<std::endl;
	
}

WrongAnimal::WrongAnimal(WrongAnimal const &instance)
{
	*this = instance;	
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout<<"Wrong animal destructor"<<std::endl;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->type = rhs.type;
	return(*this);
}

void WrongAnimal::makeSound() const
{
	std::cout <<"rong  annnnniiiiiimmaaaaaaalllllllllll"<<std::endl;
}

std::string WrongAnimal::getType() const
{
	return(this->type);
}