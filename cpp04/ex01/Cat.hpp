#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat(void);
		Cat(Cat const &instance);
		Cat &operator=(Cat const &rhs);
		~Cat(void);
		void makeSound() const;
		std::string getType() const ;
};

#endif