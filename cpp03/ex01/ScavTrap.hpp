#pragma once



# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap const& cpy);
		ScavTrap & operator=(const ScavTrap& cpy);
		void 		attack(std::string const& target);
		void		guardGate();
	private:
	bool	_gate;
};

std::ostream&	operator<<(std::ostream& stream, ScavTrap const& oo);
