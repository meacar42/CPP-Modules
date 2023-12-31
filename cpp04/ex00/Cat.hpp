#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"


class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &instance);
		Cat &operator=(Cat const &rhs);
		~Cat(void);
		void makeSound() const;
		std::string getType() const ;
};

#endif