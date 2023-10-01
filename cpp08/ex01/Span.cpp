#include "Span.hpp"

Span::Span(void)
{
	std::cout<<"constructer"<<std::endl;
	this->N = 0;
}
Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span(Span const &instance)
{
	std::cout<<"cpy const"<<std::endl;
	*this = instance;
}

Span::~Span(void){}

Span &	Span::operator=(Span const &rhs)
{
	this->N = rhs.N;
	return(*this);
}

void Span::addNumber(unsigned int c)
{
	if(this->vec.size() == N )
		throw VectorFull();
	this->vec.push_back(c);

}
void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = begin; it < end; it++) {
		this->vec.push_back(*it);
	}
}

int Span::shortestSpan()
{
	int c;
	int d;
	if (this->vec.size() < 2)
		throw vectorIsTooSmall();
	std::vector<int>::iterator it = this->vec.begin();
	std::vector<int>::iterator it1 = this->vec.begin();
   std::sort(this->vec.begin(),this->vec.end());
   int min_span = 2147483647;
   for(; it != this->vec.end(); it++)
   {
		//std::cout << *it<<std::endl;
		if(*(it + 1) != 0)
				c =  *(it) - *(it + 1);
		if(*(it + 1) == 0)
				c = *(it) - *(it1);
			d = std::abs(c);
			if (d < min_span)
				min_span = d;
   }
	return min_span;
}
 int Span::longestSpan()
 {
	int c;
	int d;
	if (this->vec.size() < 2)
		throw vectorIsTooSmall();
	std::vector<int>::iterator it = this->vec.begin();
		std::vector<int>::iterator it1 = this->vec.begin();
   std::sort(this->vec.rbegin(),this->vec.rend());
   int max_span = -2147483648;
   for(; it != this->vec.end(); it++)
   {
		//std::cout << *it<<std::endl;
			if(*(it + 1) != 0)
				c =  *(it) - *(it + 1);
			if(*(it + 1) == 0)
				c = *(it) - *(it1);
			d = std::abs(c);
			if (d > max_span) 
				max_span = d;
   }
	return max_span;
 }