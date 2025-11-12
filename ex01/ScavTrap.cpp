#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hit_point = 100;
	this->_attack_damage = 50;
	this->_energy_point = 20;
}

ScavTrap::ScavTrap(std::string name, unsigned int hp, 
	unsigned int ad, unsigned int energy) : ClapTrap(name, hp, ad, energy)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	ClapTrap::operator=(other);

	std::cout << "ScavTrap copy operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hit_point <= 0 || _energy_point <= 0)
	{
		if (_hit_point <= 0)
		{
			std::cout << "ScavTrap " + _name
			<< " is broken. It can’t attack anymore."
			<< std::endl;
		}
		if (_energy_point <= 0)
		{
			std::cout << "ScavTrap " + _name
			<< " is out of energy. It can’t move anymore."
			<< std::endl;
		}
		return;
	}
	std::cout << "ScavTrap " + _name
	<< " attacks " + target
	<< ", causing " << _attack_damage
	<< " points of damage !" << std::endl;
	_energy_point--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " + _name
	<< " is now in Gate Keeper mode !" << std::endl;
}