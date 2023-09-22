#pragma once

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int _Hitpoint;
		unsigned int _energypoint;
		unsigned int _attackdamage;
		
	public:
		ClapTrap();
	 	ClapTrap( std::string name );
		~ClapTrap(void);
		ClapTrap(const ClapTrap &rhs);
		ClapTrap& operator=(const ClapTrap& cpytrap);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setAttackDamage(unsigned int amount);
		unsigned int getAttackValue() const;
};