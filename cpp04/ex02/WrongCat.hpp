#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:
		WrongCat(void);
		WrongCat(WrongCat const &instance);
		WrongCat &operator=(WrongCat const &rhs);
		~WrongCat(void);
		void makeSound() const;
		std::string getType() const;
};

#endif