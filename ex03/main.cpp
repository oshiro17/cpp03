#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap f("B");

	f.whoAmI();
	f.showStatus();
	f.attack("MAN");
	f.showStatus();
	f.highFivesGuys();
	f.beRepaired(10);
	f.showStatus();
	f.takeDamage(1000);
	f.showStatus();
	f.highFivesGuys();
	f.beRepaired(10);
	f.attack("MAN");
	f.showStatus();
	DiamondTrap f2(f);
	f2.showStatus();
	// f2.whoAmI();
	return (0);
}