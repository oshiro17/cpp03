#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a;
	ScavTrap b;

	a.attack("B");
	a.showStatus();
	a.takeDamage(10);
	a.showStatus();
	a.beRepaired(10);
	a.showStatus();
	return (0);
}