#include "ClapTrap.hpp"

int	main()
{
	ClapTrap nono("Nono", 10, 50, 17);
	ClapTrap nono2(nono);

	nono.takeDamage(15);
	nono2.attack("Nono");
	nono2.takeDamage(10);
	nono2.beRepaired(100);

	ClapTrap walle("Wall-E", 100, 1, 100);
	ClapTrap eve("Eve", 100, 255, 5);

	walle.attack("Eve");
	eve.takeDamage(walle.getAttackDamage());
	eve.beRepaired(1);
	eve.attack("Wall-E");
	walle.takeDamage(eve.getAttackDamage());
	eve.beRepaired(1);
	eve.beRepaired(1);
	eve.beRepaired(1);
	eve.beRepaired(1);
}