#include "FragTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap ct1("mert");
	FragTrap ct2("bertay");

	ct1.setAttackDamage(4);
	ct2.beRepaired(5);
	ct1.attack("bertay");
	ct2.takeDamage(ct1.getAttackValue());
	ct2.highFivesGuys();
}