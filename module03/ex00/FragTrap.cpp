/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 12:25:23 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/13 10:35:28 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) :	_hitPoints(100), _maxHitPoints(100), _energyPoints(100),
							_maxEnergyPoints(100), _level(1), _name("DEFAULT"),
							_meleeAttackDamage(30), _rangedAttackDamage(20),
							_armorDamageReduction(5)
{
	std::cout << "[" << this->_name << "]: Hey everybody! Check out my package!" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) :	_hitPoints(100), _maxHitPoints(100), _energyPoints(100),
										_maxEnergyPoints(100), _level(1), _name(name),
										_meleeAttackDamage(30), _rangedAttackDamage(20),
										_armorDamageReduction(5)
{
	std::cout << "[" << this->_name << "]: Let's get this party started!" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << "[" << this->_name << "]: Look out everybody! Things are about to get awesome!" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "[" << this->_name << "]: Ow hohoho, that hurts! Yipes!" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_hitPoints = rhs._hitPoints;
		this->_maxHitPoints = rhs._maxHitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_maxEnergyPoints = rhs._maxEnergyPoints;
		this->_level = rhs._level;
		this->_name = rhs._name;
		this->_meleeAttackDamage = rhs._meleeAttackDamage;
		this->_rangedAttackDamage = rhs._rangedAttackDamage;
		this->_armorDamageReduction = rhs._armorDamageReduction;
	}
	std::cout << "[" << this->_name << "]: Recompiling my combat code!" << std::endl;
	return (*this);
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout	<< "[" << this->_name << "]: Ranged attack on " << target
				<< " caused " << this->_rangedAttackDamage << " points of damage!" << std::endl;
	return ;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout	<< "[" << this->_name << "]: Melee attack on " << target
				<< " caused " << this->_meleeAttackDamage << " points of damage!" << std::endl;
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	unsigned int actualDamage;

	if (amount <= this->_armorDamageReduction)
	{
		std::cout << "[" << this->_name << "]: That did nothing to me! No damage taken" << std::endl;
		return ;
	}
	actualDamage = amount - this->_armorDamageReduction;
	if (actualDamage <= this->_hitPoints)
		this->_hitPoints -= actualDamage;
	else
		this->_hitPoints = 0;
	std::cout	<< "[" << this->_name << "]: Took " << actualDamage
				<< " points of damage! Current hitpoints: " << this->_hitPoints << std::endl;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if ((this->_hitPoints + amount) > this->_maxHitPoints)
	{
		this->_hitPoints = this->_maxHitPoints;
		std::cout	<< "[" << this->_name << "]: Back to full health! Current hitpoints: "
					<< this->_hitPoints << std::endl;
	}
	else
	{
		this->_hitPoints += amount;
		std::cout	<< "[" << this->_name << "]: Restored " << amount
					<< " hitpoints. Current hitpoints: " << this->_hitPoints << std::endl;
	}
	return ;
}

void	FragTrap::vaultHunter_dot_exe(std::string const &target)
{
	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::string	attacks[5] = { "Grenade", "Sniper", "Shotgun", "C4", "Flamethrower" };

		std::cout << "[" << this->_name << "]: Hit " << target << " with a " << attacks[rand() % 5] << "!" << std::endl;
		std::cout << "Current energy points: " << this->_energyPoints << std::endl;
	}
	else
	{
		std::cout << "[" << this->_name << "]: I don't have enough energy left for this move..." << std::endl;
		std::cout << "Current energy points: " << this->_energyPoints << std::endl;
	}
	return ;
}
