#include "./include/ScavTrap.hpp"

int main()
{
    std::cout << "Constructor: \n" << std::endl;
    ClapTrap    a("Clappy");
    ScavTrap    b("Scavy");

    std::cout << "\nFight: \n" << std::endl;
    a.attack("Scavy");
    b.takeDamage(0);
    b.attack("Clappy");
    a.takeDamage(20);
    
    std::cout << "\nHeal: \n" << std::endl;
    a.beRepaired(20);
    b.beRepaired(20);

    std::cout << "\nEnd fight: \n" << std::endl;
    b.guardGate();
    b.guardGate();
    std::cout << "\nDestructor: \n" << std::endl;
	return (0);
}