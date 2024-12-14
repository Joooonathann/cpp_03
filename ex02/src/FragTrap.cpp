#include "../include/FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Default Constructor for the name " << this << " called" << std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Constructor for the name " << this->_name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor for " << this->_name << " called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
    if (this == &src)
		return (*this);
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " says: \"High five, guys! Let's do it! ✋\"" << std::endl;
}