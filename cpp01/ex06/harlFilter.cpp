#include "harlFilter.hpp"


void   Harl::debug()
{
  std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}



void   Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    std::cout << std::endl;
}



void   Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming foryears whereas you started working here since last month."<< std::endl;
    std::cout << std::endl;
}



void   Harl::error()
{
	
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}


void Harl::complain(std::string str)
{
	std::string kase[4] = {"DEBUG" ,"INFO","WARNING","ERROR"};
	int i = 0;

	for(i = 0; i < 4 && kase[i].compare(str);i++);

	switch(i)
	{
		case 0:
		this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
				break;
		case 3:
			this->error();
			break;
		default:
		std::cout << "Missing Input" << std::endl;
	}
}


