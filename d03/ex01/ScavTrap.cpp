/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 12:25:23 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/26 13:48:23 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :	_hitPoints(100), _maxHitPoints(100), _energyPoints(50),
							_maxEnergyPoints(50), _level(1), _name("DEFAULT"),
							_meleeAttackDamage(20), _rangedAttackDamage(15),
							_armorDamageReduction(3)
{
	std::cout << "[" << this->_name << "]: Hahaha... I ascend!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) :	_hitPoints(100), _maxHitPoints(100), _energyPoints(50),
										_maxEnergyPoints(50), _level(1), _name(name),
										_meleeAttackDamage(20), _rangedAttackDamage(15),
										_armorDamageReduction(3)
{
	std::cout << "[" << this->_name << "]: Hahahahaha! I'm alive!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << "[" << this->_name << "]: Holy crap, that worked?!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[" << this->_name << "]: My robotic flesh! AAHH!" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
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
	std::cout << "[" << this->_name << "]: Running the sequencer!" << std::endl;
	return (*this);
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout	<< "[" << this->_name << "]: Hit " << target
				<< " with a ranged attack! Did " << this->_rangedAttackDamage << " points of damage!" << std::endl;
	return ;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout	<< "[" << this->_name << "]: Hit " << target
				<< " with a melee attack! Did " << this->_meleeAttackDamage << " points of damage!" << std::endl;
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int actualDamage;

	if (amount <= this->_armorDamageReduction)
	{
		std::cout << "[" << this->_name << "]: Pff... Got anything better than that? No damage taken." << std::endl;
		return ;
	}
	actualDamage = amount - this->_armorDamageReduction;
	if (actualDamage <= this->_hitPoints)
		this->_hitPoints -= actualDamage;
	else
		this->_hitPoints = 0;
	std::cout	<< "[" << this->_name << "]: Ouch! That hurts! Took " << actualDamage
				<< " points of damage! Current hitpoints: " << this->_hitPoints << std::endl;
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if ((this->_hitPoints + amount) > this->_maxHitPoints)
	{
		this->_hitPoints = this->_maxHitPoints;
		std::cout	<< "[" << this->_name << "]: Feeling fully healthy again! Current hitpoints: "
					<< this->_hitPoints << std::endl;
	}
	else
	{
		this->_hitPoints += amount;
		std::cout	<< "[" << this->_name << "]: That feels good. Restored " << amount
					<< " hitpoints. Current hitpoints: " << this->_hitPoints << std::endl;
	}
	return ;
}

void	ScavTrap::challengeNewcomer(std::string const &newcomer)
{
	std::string	challenges[5] { "Game of Rock, Paper, Scissors",
								"Dance battle",
								"100 meter sprint",
								"Game of chess",
								"Game of smash bros" };

	std::cout	<< "[" << this->_name << "]: AHA " << newcomer << ". I challenge you to a "
				<< challenges[rand() % 5] << "!" << std::endl;
	return ;
}
