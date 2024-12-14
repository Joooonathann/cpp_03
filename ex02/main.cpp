#include "./include/ScavTrap.hpp"
#include "./include/FragTrap.hpp"

int main()
{
    std::cout << "Constructor: \n" << std::endl;
    ScavTrap    a("Scavy");
    FragTrap    b("Fragy");

    std::cout << "\nFight: \n" << std::endl;
    a.attack("Fragy");
    b.takeDamage(20);
    b.attack("Scavy");
    a.takeDamage(30);
    
    std::cout << "\nHeal: \n" << std::endl;
    a.beRepaired(20);
    b.beRepaired(20);

    std::cout << "\nEnd fight: \n" << std::endl;
    b.highFivesGuys();
    std::cout << "\nDestructor: \n" << std::endl;
	return (0);
}