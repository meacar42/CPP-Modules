#include "ScavTrap.hpp"
 
ScavTrap::ScavTrap(){
	this->_Hitpoint = 100;
    this->_energypoint = 50;
    this->_attackdamage = 20;
	this->_gate = false;
	 std::cout << "< ScavTrap > - " << this->name << " destructed." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->_Hitpoint = 100;
    this->_energypoint = 50;
    this->_attackdamage = 20;
	this->_gate = false;
	std::cout << "< ScavTrap > - " << this->name<< " constructed." << std::endl;
}    



ScavTrap::~ScavTrap(){
    std::cout << "< ScavTrap > - " << this->name << " destructed." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& cpy) : ClapTrap(cpy)
{
		this->name = cpy.name;
		this->_Hitpoint = cpy._Hitpoint;
		this->_energypoint = cpy._energypoint;
		this->_attackdamage = cpy._attackdamage;
		this->_gate = cpy._gate;
		std::cout<<"copy constructer called"<<std::endl;
	
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy)
{
	this->name = cpy.name;
	this->_Hitpoint=cpy._Hitpoint;
	this->_energypoint = cpy._energypoint;
	this->_attackdamage = cpy._attackdamage;
	this->_gate = cpy._gate;
	return(*this);
}

void 	ScavTrap::attack(std::string const& target)
{
	if(_energypoint <= 0)
		std::cout<<"no enough enegy"<<std::endl;
	
	std::cout<< this->name << " attack " << target << " damage "<<_attackdamage<<std::endl;

	_energypoint -= 1;	
}
void		ScavTrap::guardGate()
{
	_gate ^= true;// bitwase xor demek gate true ise 1 döndür;
	if(_gate)
		std::cout << name << " is keeping the gate." << std::endl;

	else
	std::cout << name << " is not  keeping the gate." << std::endl;

}