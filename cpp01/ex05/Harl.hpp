#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
class Harl
{
	private:
		typedef void(Harl::*fpoint) ();
		void debug( void );
 		void info( void );
	 	void warning( void ); 
		void error( void );

	public:
		void    complain( std::string kase);

};

#endif