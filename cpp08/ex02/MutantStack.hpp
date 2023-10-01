#pragma once

#include <iostream>
#include <stack>
#include <algorithm>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
	 MutantStack(){};
	 ~MutantStack(){};
	 MutantStack& operator=( MutantStack const &cpy);

	 typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin()
	{
		return MutantStack<T>::c.begin();
	}
	iterator end()
	{
		return MutantStack<T>::c.end();
	}
};


