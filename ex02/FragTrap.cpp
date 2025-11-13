#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap() : ScavTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name, unsigned int hp,
	unsigned int ad, unsigned int energy) : ScavTrap(name, hp, ad, energy)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ScavTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy operator called" << std::endl;
	ScavTrap::operator=(other);
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " + _name
	<< ": Who wants a HIGH FIVE ? "
	<< "I promise it only explodes... sometimes !"
	<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructed called" << std::endl;
}