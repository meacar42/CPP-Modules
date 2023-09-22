#include "Fixed.hpp"


Fixed::Fixed() : number(0)
{
	std::cout<<	"Default constructor called"<< std::endl;
};
Fixed::~Fixed(){}


Fixed::Fixed(int nbr)
{
	this-> number = nbr * pow(2, this->fract);
	std::cout<<"Int constructor called"<<std::endl;

}
Fixed::Fixed(float nbr)
{
	this->number = roundf(nbr * pow(2, this->fract));
	std::cout<<"Float constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed &cpyconst)
{
	*this = cpyconst;
	std::cout<<"Copy constructor called"<<std::endl;	
}

Fixed& Fixed::operator=(Fixed const& m)
{
	this->number = m.number;
	std::cout << "Copy assignment operator called" << std::endl;
	return(*this);
}

void 	Fixed::setRawBits(int nbr)
{
	this->number = nbr;
}
int     Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called"<< std::endl;
		 return (this->number);
}

int Fixed::toInt(void) const// const muahbbeti var ?
{
	return(this-> number / pow(2, this->fract));
}
float Fixed::toFloat( void ) const
{
	return((float)number / pow(2, this->fract));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){

		os << fixed.toFloat();
		return(os); // zincirleme çıkış için << a << b
}