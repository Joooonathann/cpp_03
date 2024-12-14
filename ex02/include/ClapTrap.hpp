#ifndef __CLAPTRAP__
	#define __CLAPTRAP__

	#include <iostream>

	class ClapTrap
	{
		protected:
			std::string		_name;
			unsigned int	_hitPoints;
			unsigned int	_energyPoints;
			unsigned int	_attackDamage;
		public:
			ClapTrap();
			ClapTrap(const std::string &name);
			ClapTrap(const ClapTrap &copy);
			virtual 		~ClapTrap();
			ClapTrap		&operator=(const ClapTrap &src);
			virtual void	attack(const std::string &target);
			void			takeDamage(unsigned int amount);
			void			beRepaired(unsigned int amout);
	};
	
#endif