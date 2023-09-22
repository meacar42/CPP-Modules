#include "Brain.hpp"

Brain::Brain(void)
{
	for(int i = 0; i < 100 ; i++)
		this->ideas[i] = "ideaaaa";
	std::cout << "Brain constructor Called" <<  std::endl;
}

Brain::~Brain(void)
{
	std::cout << "brain destructor called" <<std::endl;
}
	
Brain::Brain(Brain const &cpyconst)
{
	std::cout<<"cpoy"<<std::endl;
	*this= cpyconst;
}

Brain& Brain::operator=(Brain const& opover)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = opover.ideas[i];
	return(*this);
}
std::string Brain::get()
{
		std::cout << ideas;
		return(this->ideas[5]);
	
}	