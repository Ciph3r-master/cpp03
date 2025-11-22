#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &obj);
		ClapTrap&		operator=(const ClapTrap& obj);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName() const;
		unsigned int	getHP() const;
		unsigned int	getEnergy() const;
		unsigned int	getAttackDamage() const;
		void			debug() const;

	protected:
		std::string				_name;
		unsigned int			_hit_point;
		unsigned int			_energy_point;
		unsigned int			_attack_damage;
};

#endif