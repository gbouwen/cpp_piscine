/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 16:37:52 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/08 17:57:15 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap here!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "ClapTrap copy!" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap out!" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
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
	std::cout << "ClapTrap =" << std::endl;
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout	<< "[" << this->_name << "]: Ranged attack on " << target
				<< " caused " << this->_rangedAttackDamage << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout	<< "[" << this->_name << "]: Melee attack on " << target
				<< " caused " << this->_meleeAttackDamage << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
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

void	ClapTrap::beRepaired(unsigned int amount)
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
