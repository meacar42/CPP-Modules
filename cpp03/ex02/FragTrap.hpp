#pragma once

#include  "ClapTrap.hpp"
#include <iostream>
class FragTrap : public ClapTrap
{
	private:
	
	
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& cpyconst);
		FragTrap &operator=(FragTrap const &cpyop);
		~FragTrap();
		void highFivesGuys(void);


};
std::ostream& operator<<(std::ostream& s1,FragTrap const& s2);

