#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	this->type = "aanimal";
	std::cout << this->type << " AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal( std::string atype)
{
	this->type = atype;
	std::cout << "AAnimal " << this->type << " AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &instance)
{
	 std::cout << "AAnimal copy constructor called" << std::endl;
		*this = instance;
}

AAnimal::~AAnimal(void)
{
	 std::cout << "AAnimal destructor called" << std::endl;
}
void  AAnimal::makeSound( void ) const
{
	std::cout << "AAnimal makeSound called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	 this->type = rhs.type;
	 return(*this);
}