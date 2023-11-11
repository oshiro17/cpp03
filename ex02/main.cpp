#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// int	main(void)
// {
// 	ScavTrap a;
// 	FragTrap b;

// 	a.attack("B");
// 	b.takeDamage(5);
// 	b.highFivesGuys();
// 	b.attack("A");
// 	a.takeDamage(10);
// 	a.beRepaired(10);
// 	a.showStatus();
// 	return (0);
// }

int main(void)
{
	FragTrap f("F");

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
	FragTrap f2(f);
	f.showStatus();
	return (0);
}