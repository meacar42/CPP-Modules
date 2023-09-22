#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
	std::string _type;
	public:
	Weapon();
	Weapon(std::string str);
	void setType(std::string type);
	const std::string get_Type();
};

#endif