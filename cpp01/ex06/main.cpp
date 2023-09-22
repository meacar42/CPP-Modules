#include "harlFilter.hpp"

int main(int ac, char**ag)
{

	if(ac == 2)
	{
			Harl harl;
    		harl.complain(ag[1]);
			return 0;
	}
	else
	{
		std::cout <<"error"<<std::endl;
		return 1;
	}
}