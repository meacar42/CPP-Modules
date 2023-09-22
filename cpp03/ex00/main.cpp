#include "ClapTrap.hpp"


int main(void)
{

	ClapTrap ct1("mert");
	ClapTrap ct2("bertay");

	ct1.setAttackDamage(15);
	ct2.beRepaired(5);
	ct1.attack("bertay");
	ct2.takeDamage(ct1.getAttackValue());


}