#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int nbr;
		static const int fract = 8;
	public:
		Fixed();
		Fixed(const int nbr);
		Fixed(const float nbr);
		Fixed(const Fixed &cpyconst);
		Fixed& operator=(Fixed const& m);
		~Fixed();


		void 	setRawBits(int nbr);
		int     getRawBits()const;
		float toFloat( void )const;
		int toInt( void )const;


		bool operator>(const Fixed& comp) const;
		bool operator<(const Fixed& comp) const;
		bool operator>=(const Fixed& comp) const;
		bool operator<=(const Fixed& comp) const;
		bool operator==(const Fixed& comp) const;
		bool operator!=(const Fixed& comp) const;

		float operator+(const Fixed& comp) const;
		float operator-(const Fixed& comp) const;
		float operator*(const Fixed& comp) const; 
		float operator/(const Fixed& comp) const;

		//pre
		Fixed& operator++(void);
		Fixed& operator--(void);
		//post
		Fixed operator--(int);
		Fixed operator++(int);




		static Fixed& min(Fixed& fix1, Fixed& fix2);
		static const Fixed& min(Fixed const& fix1, Fixed const& fix2);
		static Fixed& max(Fixed& fix1, Fixed& fix2);
		static const Fixed& max(Fixed const& fix1, Fixed const& fix2);
		friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};