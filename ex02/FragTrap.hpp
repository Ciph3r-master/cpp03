#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap : public ScavTrap
{
	public:
		FragTrap();
		FragTrap(std::string name, unsigned int hp, unsigned int ad, unsigned int energy);
		~FragTrap();
		FragTrap(const FragTrap &obj);
		FragTrap	&operator=(const FragTrap &obj);
		void		highFivesGuys(void);
};


#endif