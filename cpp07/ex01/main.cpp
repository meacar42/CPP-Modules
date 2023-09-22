#include "iter.hpp"

template <class T>
void h(T& t)
{
		std::cout << t << 'a'<< std::endl;
}

int main()
{
	int i = 2;
	std::string str[2]= {"mert","acar"};	

	iter(str,i,h);
}