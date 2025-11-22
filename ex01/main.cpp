#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap clap("ClapTrap");

	clap.debug();
	clap.attack("FragTrap");
	clap.takeDamage(10);
	clap.beRepaired(1);

	ScavTrap scav("ScavTrap");

	scav.debug();
	scav.guardGate();
	scav.attack("FragTrap");
	scav.takeDamage(10);
	scav.beRepaired(1);
}