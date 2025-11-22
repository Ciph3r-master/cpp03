#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &obj);
		DiamondTrap	&operator=(const DiamondTrap &obj);
		void		whoAmI();
		void		attack(const std::string &name);
		void		debug() const;
		std::string getName() const;
	private :
		std::string _name;
};


#endif