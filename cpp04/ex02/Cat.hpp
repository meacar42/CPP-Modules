#ifndef CAT_HPP
# define CAT_HPP
#include "Brain.hpp"
#include "AAnimal.hpp"

class Cat : public AAnimal
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