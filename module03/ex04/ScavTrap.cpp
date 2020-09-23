/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 12:25:23 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/26 16:28:55 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = "DEFAULT";
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "SCAVTRAP [" << this->_name << "]: Hahaha... I ascend!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "SCAVTRAP [" << this->_name << "]: Hahahahaha! I'm alive!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SCAVTRAP [" << this->_name << "]: My robotic flesh! AAHH!" << std::endl;
	return ;
}

void	ScavTrap::challengeNewcomer(std::string const &newcomer)
{
	std::string	challenges [5] = { "Game of Rock, Paper, Scissors",
								"Dance battle",
								"100 meter sprint",
								"Game of chess",
								"Game of smash bros" };

	std::cout	<< "SCAVTRAP [" << this->_name << "]: AHA " << newcomer << ". I challenge you to a "
				<< challenges[rand() % 5] << "!" << std::endl;
	return ;
}
