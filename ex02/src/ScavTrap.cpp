#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_gateGuard = false;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_gateGuard = false;
	std::cout << "ScavTrap Constructor for the name " << this->_name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    this->_gateGuard = copy._gateGuard;
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor for " << this->_name << " called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
    if (this == &src)
		return (*this);
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    this->_gateGuard = src._gateGuard;
    return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " cannot attack because it has no hit points or energy left!" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target
	          << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void		ScavTrap::guardGate(void)
{
	if (this->_gateGuard)
		std::cout << "ScavTrap " << this->_name << " is already guarding the gate." << std::endl;
	else
	{
		this->_gateGuard = true;
		std::cout << "ScavTrap " << this->_name << " is now guarding the gate." << std::endl;
	}
}