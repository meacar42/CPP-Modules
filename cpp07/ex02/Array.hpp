#pragma once

#include <iostream>


template <class T>
class Array
{
	private:
	T* array;
	int a_size;

	public:
		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Index out of range";
				};
		};
		Array<T>(void)
		{
			array = NULL;
			a_size = 0;
		}
		Array<T>(const unsigned int n) : a_size(n)
		{
			if(n < 0)
				throw OutOfRangeException();
			this->array = new T[n];
		}
		Array<T>(const Array<T>  &instance)
		{
			*this = instance;
		}
		Array<T>& operator=(const Array<T>& rhs)
		{
			this->a_size = rhs.size();
			this->array = new T[this->a_size];
				for(int i = 0; i < this->a_size; i++)
				{
					this->array[i] = rhs[i];
				}
				return *this;

		}
		~Array<T>(void)
		{
			delete [] this->array;
		}

		T&  operator[](int i) const
		{
			if(i >= this->a_size || i < 0)
			{
				throw OutOfRangeException();
			}
			return this->array[i];
		}
		int size() const
		{
			return this->a_size;
		}
};
template <class T>
std::ostream& operator<<(std::ostream& a,Array<T>& ins);

