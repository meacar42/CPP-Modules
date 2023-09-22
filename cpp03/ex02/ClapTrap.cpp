#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), _Hitpoint(10), _energypoint(10), _attackdamage(3){
	 
	 
	std::cout << "ClapTrap " << name << " is born!" << std::endl;
}
ClapTrap::ClapTrap( std::string name ): name(name),_Hitpoint(10), _energypoint(10), _attackdamage(3){}

ClapTrap::~ClapTrap(void){
	 std::cout << "ClapTrap destructor called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    *this = rhs;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& cpytrap)
{
	this->_Hitpoint = cpytrap._Hitpoint;
	this->name = cpytrap.name;
	this->_energypoint = cpytrap._energypoint;
	this->_attackdamage = cpytrap._attackdamage;
	return(*this);
}

   
void    ClapTrap::attack( std::string const& target )
{
    if (_energypoint <= 0)
    {
        std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << _attackdamage << " points of damage!" << std::endl;
    _energypoint -= 1;
}

 
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_Hitpoint <= amount)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
	_Hitpoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energypoint <= amount)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
        return;
    }
	    std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
	
	_energypoint -= 1;
	_Hitpoint += amount;
}


void	ClapTrap::setAttackDamage(unsigned int amount)
{
	_attackdamage = amount; 
	std::cout << name << "' damage has been set " << amount << std::endl;
}

unsigned int	ClapTrap::getAttackValue() const
{
	if (_attackdamage <= 0)
		return 0;
	return _attackdamage;
}
	


