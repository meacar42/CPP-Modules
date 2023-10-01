#pragma once

#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <algorithm>
#include <math.h>

class Span
{
	private:
		unsigned int N;
		std::vector<int> vec;
		
	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const &instance);
		Span &operator=(Span const &rhs);
		~Span(void);
		void addNumber(unsigned int c);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();
	
	class VectorFull : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return"vector full";
			}
	};
	class vectorIsTooSmall : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "vector to small";
			}
	};

};