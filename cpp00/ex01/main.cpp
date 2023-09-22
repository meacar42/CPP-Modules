#include "PhoneBook.hpp"

int main()
{
    std::string str; 
    PhoneBook mybook;
    while(1)
    {
		std::cout << "--------------USAGE---------------\n";
		std::cout << "ADD     : To add a contact. \n";
		std::cout << "SEARCH  : To search for a contact. \n";
		std::cout << "EXIT    : to quite the PhoneBook. \n";
		std::cout << "----------------------------------\n";
        
        getline(std::cin, str);
		if (!std::cin.good())
			exit(1);
        if(str == "ADD")
            mybook.ADD();
        if(str == "SEARCH")
            mybook.SEARCH();
        if(str == "EXIT")
            exit(0);
    } 

}