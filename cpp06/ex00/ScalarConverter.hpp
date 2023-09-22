#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>

class ScalarConverter
{
	private:
	public:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &instance);
		ScalarConverter &operator=(ScalarConverter const &rhs);
		~ScalarConverter(void);
		static void convert(std::string m);

};
std::ostream &operator<<(std::ostream const& a,ScalarConverter const &b);

#endif