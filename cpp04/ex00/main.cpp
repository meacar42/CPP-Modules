#include"Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongC = new WrongCat();

	std::cout << wrongC->getType() << " " << std::endl;
	wrongC->makeSound();
	wrong->makeSound();

	delete meta;
	delete j;
	delete i;

	delete wrong;
	delete wrongC;
	return 0;
}