#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int number;
		static const int fract = 8;
	public:
		Fixed();
		Fixed( int nbr);
		Fixed( float nbr);
		Fixed(const Fixed &cpyconst);
		Fixed& operator=(Fixed const& m);
		~Fixed();


		void 	setRawBits(int nbr);
		int     getRawBits() const;
		float toFloat( void ) const;
		int toInt( void ) const;
	
	friend	std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};
