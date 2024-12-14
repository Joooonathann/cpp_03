#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Constructor for the name " << this->_name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy): _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deconstructor for " << _name << " called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot attack because it has no hit points or energy left!" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target
	          << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;

	std::cout << "ClapTrap " << this->_name << " takes " << amount
	          << " points of damage! Remaining hit points: " << this->_hitPoints << "." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot repair because it has no hit points or energy left!" << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;

	std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount
	          << " hit points! Current hit points: " << this->_hitPoints << "." << std::endl;
}
