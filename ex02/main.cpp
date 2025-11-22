#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	FragTrap frag("FragTrap");

	frag.debug();
	frag.highFivesGuys();
	frag.attack("FragTrap");
	frag.takeDamage(10);
	frag.beRepaired(1);
}