#ifndef __SCAVTRAP__
	#define __SCAVTRAP__

	#include "./ClapTrap.hpp"
	
	class ScavTrap: public ClapTrap
	{
		private:
			bool	_gateGuard;
		public:
			ScavTrap();
			ScavTrap(const std::string &name);
			ScavTrap(const ScavTrap &copy);
			~ScavTrap();
			ScavTrap	&operator=(const ScavTrap &src);
			void		attack(const std::string &target);
			void		guardGate(void);
	};

#endif