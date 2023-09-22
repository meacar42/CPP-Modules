#pragma once

#include <iostream>

class Fixed
{
	private:
    	int fixed_point;
		static const int fracbits = 8;
		
	public:
		Fixed();
		Fixed(const Fixed &cpyconst);
		~Fixed();
		Fixed &operator=(const Fixed  &cpyconst);
		void 	setRawBits(int nbr);
		int     getRawBits() const;

};
