#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("Unknown_clap_name")
{
	ScavTrap	Scavtmp;
	FragTrap	Fragtmp;

	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "Unknown";
	this->_hit_point = Fragtmp.getHP();
	this->_energy_point = Scavtmp.getEnergy();
	this->_attack_damage = Fragtmp.getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name")
{
	ScavTrap Scavtmp;
	FragTrap Fragtmp;

	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = name;
	this->_hit_point = Fragtmp.getHP();
	this->_energy_point = Scavtmp.getEnergy();
	this->_attack_damage = Fragtmp.getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) 
	: ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	this->_name = other.getName();
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy operator called" << std::endl;
	ClapTrap::operator=(other);
	this->_name = other.getName();
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructed called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << _name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string &name)
{
	ScavTrap::attack(name);
}

std::string	DiamondTrap::getName() const
{
	return this->_name;
}

void	DiamondTrap::debug() const
{
	std::cout << "-------------------------\n"
			  << std::endl;
	std::cout << "Name : " << this->_name << std::endl;
	std::cout << "HP : " << this->_hit_point << std::endl;
	std::cout << "Energy : " << this->_energy_point << std::endl;
	std::cout << "Attack Damage : " << this->_attack_damage << std::endl;
	std::cout << "\n-------------------------" << std::endl;
}