#include "Zombie.hpp"

int main()
{
	Zombie a("selam");
	a.announce();	
	a.randomChump("3");
	 
	Zombie *z = a.newZombie("mert");
	z->announce();
	delete z;
}