#include "Fixed.hpp"



Fixed::Fixed() : nbr(0)
{
	std::cout<<	"Default constructor called"<< std::endl;
};
Fixed::~Fixed(){}


Fixed::Fixed(const int nbr)
{
	this-> nbr = nbr * pow(2, this->fract);
	std::cout<<"Int constructor called"<<std::endl;

}
Fixed::Fixed(const float nbr)
{
	this->nbr = roundf(nbr * pow(2, this->fract));
	std::cout<<"Float constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed &cpyconst)
{
	*this = cpyconst;
	std::cout<<"Copy constructor called"<<std::endl;	
}

void 	Fixed::setRawBits(int nbr)
{
	this->nbr = nbr;
}
Fixed& Fixed::operator=(Fixed const& m)
{
	this->nbr = m.nbr;
	return(*this);
}
int     Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called"<< std::endl;
		 return (this->nbr);
}
int Fixed::toInt(void) const
{
	return(this-> nbr / pow(2, this->fract));
}
float Fixed::toFloat( void ) const
{
	return((float)nbr / pow(2, this->fract));
}
//comp op
bool Fixed::operator<(const Fixed& m) const
{
	return(this->nbr < m.nbr);
}

bool Fixed::operator>(const Fixed& comp) const
{
	return(this->nbr > comp.nbr);
}
bool Fixed::operator>=(const Fixed& comp) const
{
	return(this->nbr >= comp.nbr);
}
bool Fixed::operator<=(const Fixed& comp) const
{
	return(	this->nbr <= comp.nbr);
}

bool Fixed::operator==(const Fixed& comp) const
{

	return(this->nbr == comp.nbr);
}
bool Fixed::operator!=(const Fixed& comp) const
{
	return(this->nbr != comp.nbr);
}


float Fixed::operator+(const Fixed& comp) const
{
		return(this->toFloat() + comp.toFloat());
}

float Fixed::operator-(const Fixed& comp) const 
{
	return(this->toFloat() - comp.toFloat());
}

float Fixed::operator*(const Fixed& comp) const 
{
	return(this->toFloat() * comp.toFloat());
}

float Fixed::operator/(const Fixed& comp) const 
{
	return(this->toFloat() / comp.toFloat());
}

// increment//
Fixed&	Fixed::operator++(void)
{
	this->nbr++;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed rs(*this);
	this->nbr++;
	return (rs);
}
Fixed&	Fixed::operator--(void)
{
	this->nbr--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed rs(*this);
	this->nbr--;
	return (rs);
}




// fonction //

Fixed& Fixed::min(Fixed& fix1, Fixed& fix2)
{
	 if(fix1 < fix2)
	 	return(fix1);
	return(fix2);
}

const Fixed& Fixed::min(Fixed const& fix1, Fixed const& fix2)
{
	 if(fix1 < fix2)
	 	return(fix1);
	return(fix2);
}

 Fixed& Fixed::max(Fixed& fix1, Fixed& fix2)
 {
	if(fix1 > fix2)
	 	return(fix1);
	return(fix2);
}

const Fixed& Fixed::max(Fixed const& fix1, Fixed const& fix2)
{
	if(fix1 > fix2)
	 	return(fix1);
	return(fix2);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){

		os << fixed.toFloat();
		return(os); // zincirleme çıkış için << a << b
}