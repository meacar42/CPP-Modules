#include "Zombie.hpp"

int main()
{
	Zombie *c;

	c = zombieHorde(20,"mert");
	c[0].announce();
	delete[] c;
}