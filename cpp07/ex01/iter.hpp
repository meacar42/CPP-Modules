#pragma once

#include <iostream>

template <class T>
void	iter(T *tab, unsigned int length, void(*f)(T& b))
{
	for (unsigned int i = 0; i < length; i++)
		f(tab[i]);
}