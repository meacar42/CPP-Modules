#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "constructer called"<< std::endl;
}

int checker(std::string m)
{
	int i = 0;
	int dot_count = 0;
	int sing_count = 0;
	int count = 0;
	for(; isdigit(m[i]) || m[i] == '.' || m[i] == '-' || m[i] == '+'; i++)
	{
		if(m[i] == '.')
			dot_count++;
		else if(m[i] == '-' || m[i] == '+')
			sing_count++;
		else if((sing_count == 1 && m[1] == '.') || m[0] == '.')
			count++;
	}
	if(i == 0 || dot_count > 1 || sing_count > 1 || (m.length() == 1 && dot_count == 1) || (m.length() == 1 && sing_count == 1)) 
		return 1;
	if(count == 1)
		return 2;
	if(m[i] == '\0' || (m[i] == 'f' && m[i + 1] == '\0'))
		return 0;
	return 1;
}

void ScalarConverter::convert(std::string m)
{
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	int a;
	float b;
	double c;
	std::string d;
	if(m == "nanf" || m == "-inff" || m == "+inff")
	{
		std::cout << "char : " << "impossible" << std::endl;
		std::cout << "int : " << "impossible" << std::endl;
		std::cout << "float : " << m << std::endl;
		std::cout << "double : "<< m.substr(0, m.length() - 1) << std::endl;
		
		return;
	}
	else if(m == "nan" || m == "-inf" || m == "+inf")
	{
		std::cout << "char : " << "impossible" << std::endl;
		std::cout << "int : " << "impossible" << std::endl;
		std::cout << "float : " << m << "f" <<  std::endl;
		std::cout << "double : "<< m << std::endl;
		return;
	}
	else if(checker(m) == 1)
	{
		std::cout << "Unknown" << std::endl;
		return;
	}
	else
	{
		if(checker(m) == 2)
		{
			if(m[0] == '-' || m[0] == '+')
				m.insert(1,"0");
			else
				m.insert(0,"0"); 
		}
		a = stoi(m);
		if(a < 0 || a > 127)
			std::cout << "char : " << "Non BM" << std::endl;
		else if(a <= 31 || a == 127)
			std::cout << "char : " << "Non Print" << std::endl;
		else if(a > 31 && a < 127)
			std::cout << "char : " << "'" << static_cast<char>(a) << "'"<< std::endl;
		b = static_cast<float>(stof(m));
		c = static_cast<double>(stod(m));
		std::cout << "int : " << a << std::endl;
		std::cout << "float : " << b << "f" <<std::endl;
		std::cout << "double : "<< c << std::endl;
	}
}