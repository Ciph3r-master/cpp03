#include "ClapTrap.hpp"

int	main()
{
	ClapTrap clap("ClapTrap");

	clap.debug();
	clap.attack("FragTrap");
	clap.takeDamage(10);
	clap.beRepaired(1);

	ClapTrap copy(clap);

	copy.debug();
	copy.attack("FragTrap");
	copy.takeDamage(10);
	copy.beRepaired(1);

	ClapTrap tmp("TMP");
	ClapTrap opCopy;

	opCopy = tmp;

	opCopy.debug();
	opCopy.attack("FragTrap");
	opCopy.takeDamage(10);
	opCopy.beRepaired(1);
}