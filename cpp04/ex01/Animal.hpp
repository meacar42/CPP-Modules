#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
	Animal();
	virtual ~Animal();
	Animal(Animal const &cpy);
	Animal& operator=(Animal const& cpyop);
	virtual void makeSound() const;
	virtual std::string getType() const;
};

#endif 