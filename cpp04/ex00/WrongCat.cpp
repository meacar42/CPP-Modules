#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "wrong cat";
	std::cout <<"wrong cat constructor"<<std::endl;
}

WrongCat::WrongCat(WrongCat const &instance)
{
	*this = instance;
}

WrongCat::~WrongCat(void)
{
	std::cout<<"wrong cat destructor"<<std::endl;
}

void WrongCat::makeSound() const
{
	std::cout<<"Wrong cat aaaaaaaaa"<<std::endl;
}

std::string WrongCat::getType() const
{
	return(this->type);
}

WrongCat &	WrongCat::operator=(WrongCat const &rhs)
{
	this->type = rhs.type;
	return(*this);
}