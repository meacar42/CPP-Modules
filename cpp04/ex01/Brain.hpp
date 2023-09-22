#pragma once
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(Brain const &instance);
		Brain& operator=(Brain const& opover);
		virtual ~Brain(void);
		std::string get();
};

std::ostream& operator << (std::ostream& os, const Brain& op1);