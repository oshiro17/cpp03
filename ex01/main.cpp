#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a;

	a.attack("B");
	a.showStatus();
	a.takeDamage(10);
	a.showStatus();
	a.beRepaired(10);
	a.showStatus();
	ScavTrap a2(a);
	return (0);
}