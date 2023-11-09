#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string name = "FRAP_HOGE");
	FragTrap(const FragTrap& obj);
	FragTrap& operator=(const FragTrap& obj);
	~FragTrap();
	// void attack(const std::string& target);
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);
	void highFivesGuys(void);
	// void guardGate();
};
#endif