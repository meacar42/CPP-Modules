#pragma once
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

class ElementNot : public std::exception
{
	public:
		const char* what() const throw()
		{
			return "not element";
		}
};

template<typename T>       
int easyfind(T& a,int b)
{	
	typename T::iterator  it = std::find(a.begin(), a.end(), b);

    if (it != a.end()) {
        return b;
    }
	
	throw ElementNot();
}
