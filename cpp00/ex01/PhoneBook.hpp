#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string.h>
#include "Contact.hpp"

class PhoneBook
{
    private:
    Contact contacts[8];

    public:
        void ADD();
        void SEARCH();
        int i;
		int flag;
};

#endif