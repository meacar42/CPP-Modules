#include "Contact.hpp"

void Contact::setFirstN(std::string Name)
{
    this->firstName = Name;
}

void Contact::setlastN(std::string Name)
{
    this->lastName = Name;
}

void Contact::setnickN(std::string Name)
{
    this->nickName = Name;
}

void Contact::setphoneN(std::string Name)
{
    this->phoneNumber = Name;
}

void Contact::setdarkestS(std::string Name)
{

    this->darkest = Name;
}

std::string Contact::getFirstN()
{
    return(firstName);

}
std::string Contact::getlastN()
{
    return(lastName);

}
std::string Contact::getnickN()
{

    return(nickName);
}
std::string Contact::getphoneN()
{

    return(phoneNumber);
}
std::string Contact::getdarkestS()
{

    return(darkest);
}
