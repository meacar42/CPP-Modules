#include "Base.hpp"

Base*	generate(void)
{
	Base *ret;
	int i = std::rand() % 3;

	switch(i)
	{
		case 0:
			ret = new A();
			break;

		case 1:
			ret = new B();
			break;

		case 2:
			ret = new C();
			break;
	}
	return ret;
}

void	identify(Base* p)
{
	if(A *a = dynamic_cast<A*>(p))
		std::cout << "Type: AAAAAA" << std::endl;
	else if(B *b = dynamic_cast<B*>(p))
		std::cout << "Type: BBBBBBB" << std::endl;
	else if(C *c = dynamic_cast<C*>(p))
		std::cout << "Type: CCCCCCC" << std::endl;
	else
		std::cout << "Type Unknown" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "Class: AAAAAA" << std::endl;
		(void)a;
	}
	catch(std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			std::cout << "Class: BBBBB" << std::endl;
			(void)b;
		}
		catch(std::exception &e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				std::cout << "Class: CCCCCC" << std::endl;
				(void)c;
			}
			catch(std::exception &e)
			{
				std::cout << "Unknown Type" << std::endl;
			}
		}
	}
}

Base::~Base(){}
