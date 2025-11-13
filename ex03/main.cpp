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

	DiamondTrap bb;

	bb.whoAmI();
	bb.guardGate();
	bb.highFivesGuys();
	bb.attack("Theo le sorcier");
	bb.beRepaired(1);
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