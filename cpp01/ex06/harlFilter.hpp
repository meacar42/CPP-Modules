#pragma once

#include <iostream>


class Harl
{
	private:
 		typedef         void(Harl::*funcsP) ();
        void            debug();
        void            info();
        void            warning();
        void            error();
	public:
	void complain(std::string str);
};