#include "Fixed.hpp"


Fixed::Fixed(): fixed_point(0){
std::cout << "Default constructor called"<<std::endl;
}

Fixed::~Fixed(){
	 std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed(const Fixed &cpyconst){
std::cout << "Copy constructor called"<<std::endl;
 	this->setRawBits(cpyconst.getRawBits());
}

Fixed &Fixed::operator=(const Fixed  &cpyconst)
{
	std::cout << "Copy Assignment Operator Called"<<std::endl;
	this->setRawBits(cpyconst.getRawBits());
	return *this;
}


void Fixed::setRawBits(int nbr)
{
 	this->fixed_point = nbr;
}

int    Fixed::getRawBits() const
{
		std::cout << "getRawBits member function called"<< std::endl;
		 return (this->fixed_point);
}
