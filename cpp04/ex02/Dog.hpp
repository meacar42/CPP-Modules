#ifndef DOG_HPP
# define DOG_HPP
#include "Brain.hpp"
#include "AAnimal.hpp"

class Dog: public AAnimal
{
	private:
		Brain* brain;
	public:
		Dog(void);
		Dog(Dog const &instance);
		Dog &operator=(Dog const &rhs);
		~Dog(void);
		void makeSound() const;
		std::string getType() const;
};

#endif