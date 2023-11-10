#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("A");
	ScavTrap b;

	a.attack("B");
	b.takeDamage(5);
	b.beRepaired(3);
	b.attack("A");
	b.guardGate();
	a.takeDamage(10);
	a.beRepaired(10);
	a.showStatus();
	return (0);
}