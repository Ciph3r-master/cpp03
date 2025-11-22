#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	FragTrap nono("Nono");
	// FragTrap nono2(nono);

	// nono.takeDamage(15);
	// nono2.attack("Nono");
	// nono2.takeDamage(10);
	// nono2.beRepaired(100);

	DiamondTrap def;
	DiamondTrap name("NAME");
	DiamondTrap copy(name);
	DiamondTrap tmp("TMP");
	DiamondTrap opCopy;

	opCopy = tmp;

	def.debug();
	name.debug();
	copy.debug();
	opCopy.debug();

	def.guardGate();
	def.highFivesGuys();
	copy.attack("Bernard");
	// nono.highFivesGuys();
	// FragTrap walle("Wall-E");
	// FragTrap eve("Eve");

	// walle.attack("Eve");
	// eve.takeDamage(walle.getAttackDamage());
	// eve.beRepaired(1);
	// eve.attack("Wall-E");
	// walle.takeDamage(eve.getAttackDamage());
	// eve.beRepaired(1);
	// eve.beRepaired(1);
	// eve.beRepaired(1);
	// eve.beRepaired(1);
	// eve.guardGate();
	// eve.highFivesGuys();
}