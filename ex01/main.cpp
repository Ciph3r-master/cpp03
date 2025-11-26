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

	{
		ScavTrap scav("ScavTrap");

		scav.debug();
		scav.attack("FragTrap");
		scav.takeDamage(10);
		scav.beRepaired(1);
		scav.debug();

		ScavTrap copy(scav);

		copy.debug();

		ScavTrap tmp("TMP");
		ScavTrap opCopy;

		opCopy = tmp;

		opCopy.debug();
		opCopy.attack("FragTrap");
		opCopy.takeDamage(10);
		opCopy.beRepaired(1);
		opCopy.debug();


	}
}