#ifndef __FRAGTRAP__
	#define __FRAGTRAP__

	#include "./ClapTrap.hpp"

	class FragTrap: public ClapTrap
	{
		private:

		public:
			FragTrap();
			FragTrap(const std::string &name);
			FragTrap(const FragTrap &copy);
			~FragTrap();
			FragTrap	&operator=(const FragTrap &src);
			void		highFivesGuys(void);
	};

#endif