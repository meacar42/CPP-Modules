#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_Hitpoint = 100;
	this->_energypoint = 100;
	this->_attackdamage = 30;
	std::cout<<" diff const " <<std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_Hitpoint = 100;
	this->_energypoint = 100;
	this->_attackdamage = 30;
	std::cout << "< FragTrap > - " << this->name<< " constructed." << std::endl;
}

FragTrap::FragTrap(FragTrap const & cpyconst) : ClapTrap(cpyconst)
{
	this->_Hitpoint = cpyconst._Hitpoint;
	this->_energypoint = cpyconst._energypoint;
	this-> _attackdamage = cpyconst._attackdamage;
	std::cout<< "cpyconst called" << std::endl;

}

FragTrap::~FragTrap()
{
	std::cout << "frag destructor called"<<std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &cpy)
{
	this->name = cpy.name;
	this->_Hitpoint = cpy._Hitpoint;
	this->_energypoint = cpy._energypoint;
	this->_attackdamage = cpy._attackdamage;

	return(*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << name << " wants to highFive to you." << std::endl;
}