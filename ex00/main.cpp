#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("A");
	ClapTrap b(a);

	a.showStatus();
	a.attack("B");
	a.showStatus();
	b.takeDamage(5);
	b.beRepaired(3);
	b.attack("A");
	a.takeDamage(10);
	a.showStatus();
	a.beRepaired(10);
	a.showStatus();
	b.showStatus();
	return (0);
}