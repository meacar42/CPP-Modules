#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string.h>
#include <iomanip>
class Contact
{
    private:
        std::string firstName, lastName, nickName, phoneNumber, darkest;
    public:
        void setFirstN(std::string firstName);
        void setlastN(std::string lastName);
        void setnickN(std::string nickName);
        void setphoneN(std::string phoneNumber);
        void setdarkestS(std::string darkestSecret);
        std::string getFirstN();
        std::string getlastN();
        std::string getnickN();
        std::string getphoneN();
        std::string getdarkestS();
};

#endif