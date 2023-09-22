#include "Weapon.hpp"

Weapon::Weapon()
{
	this->_type = "random weapon";
}

Weapon::Weapon(std::string str)
{
	   this->_type = str;
}

void Weapon::setType(std::string type)
{
	 this->_type = type;
}	

const std::string Weapon::get_Type()
{
	return(this->_type);
}

