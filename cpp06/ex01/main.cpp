#include "serilaze.hpp"

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
	
}
Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}

#include <stdlib.h>
int main()
{
	
	Data *a = NULL;
	uintptr_t b;
	Data* c;

	b = serialize(a); 
	c = deserialize(b);

	c->data = "mert";
	std::cout<< c->data<<std::endl;	
}


