#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class	ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hitPoint;
	unsigned int	_energyPoint;
	unsigned int	_attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& obj);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap& operator=(const ClapTrap& obj);
	void showStatus();
};
#endif