#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name, unsigned int hp, unsigned int ad, unsigned int energy);
		~ScavTrap();
		ScavTrap(const ScavTrap &obj);
		ScavTrap &operator=(const ScavTrap &obj);
		void	attack(const std::string &target);
		void	guardGate();
};

#endif