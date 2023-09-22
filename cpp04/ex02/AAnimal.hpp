#ifndef AANIMAL_HPP
# define AANIMAL_HPP
#include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		 AAnimal(void);
		AAnimal( std::string type );
		AAnimal(AAnimal const &instance);
		AAnimal &operator=(const AAnimal  &r);
		virtual ~AAnimal(void);
		virtual void    makeSound( void ) const = 0;


};
std::ostream& operator<<(std::ostream& a,const AAnimal& std);

#endif