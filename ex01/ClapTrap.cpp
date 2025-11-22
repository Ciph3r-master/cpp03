#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = "Unknown";
	this->_hit_point = 10;
	this->_attack_damage = 0;
	this->_energy_point = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_hit_point = 10;
	this->_attack_damage = 0;
	this->_energy_point = 10;
}

ClapTrap::ClapTrap(const ClapTrap &obj) : _name(obj.getName())
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_name = obj.getName();
	this->_hit_point = obj.getHP();
	this->_attack_damage = obj.getAttackDamage();
	this->_energy_point = obj.getEnergy();
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "ClapTrap copy operator called" << std::endl;
	this->_name = obj.getName();
	this->_hit_point = obj.getHP();
	this->_attack_damage = obj.getAttackDamage();
	this->_energy_point = obj.getEnergy();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destroyed ClapTrap" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hit_point <= 0 || _energy_point <= 0)
	{
		if (_hit_point <= 0)
		{
			std::cout << "ClapTrap " + _name
			<< " is broken. It can’t attack anymore."
			<< std::endl;
		}
		if (_energy_point <= 0)
		{
			std::cout << "ClapTrap " + _name
			<< " is out of energy. It can’t move anymore."
			<< std::endl;
		}
		return;
	}
	std::cout << "ClapTrap " + _name 
	<< " attacks " + target
	<< ", causing " << _attack_damage
	<< " points of damage !" << std::endl;
	_energy_point--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " + _name
	<< " took " << amount
	<< " damage";
	if (_hit_point <= amount)
	{
		std::cout << " and has been destroyed !" << std::endl;
		_hit_point = 0;
		return ;
	}
	_hit_point -= amount;
	std::cout << ", now has " << _hit_point
	<< " hit points left !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_point <= 0 || _energy_point <= 0)
	{
		if (_hit_point <= 0)
		{
			std::cout << "ClapTrap " + _name
			<< " is broken. It can’t repair itself anymore."
			<< std::endl;
		}
		if (_energy_point <= 0)
		{
			std::cout << "ClapTrap " + _name
			<< " is out of energy. It can’t move anymore."
			<< std::endl;
		}
		return;
	}
	_hit_point += amount;
	std::cout << "ClapTrap " + _name
			  << " repaired itself "
			  << ", he now has " << _hit_point
			  << " hit points !" << std::endl; 
	_energy_point--;
}

std::string ClapTrap::getName() const
{
	return this->_name;
}

unsigned int ClapTrap::getHP() const
{
	return this->_hit_point;
}

unsigned int ClapTrap::getEnergy() const
{
	return this->_energy_point;
}

unsigned int ClapTrap::getAttackDamage() const
{
	return this->_attack_damage;
}

void	ClapTrap::debug() const
{
	std::cout << "-------------------------\n" << std::endl;
	std::cout << "Name : " << this->_name << std::endl;
	std::cout << "HP : " << this->_hit_point << std::endl;
	std::cout << "Energy : " << this->_energy_point << std::endl;
	std::cout << "Attack Damage : " << this->_attack_damage << std::endl;
	std::cout << "\n-------------------------" << std::endl;
}