#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::HumanB(std::string name, Weapon *weapon)
{
	this->name = name;
	this->weapon = weapon;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void	HumanB::Attack()
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon->get_Type()<< std::endl;
}