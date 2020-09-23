/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 12:25:23 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/26 16:28:02 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_name = "DEFAULT";
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "FRAGTRAP [" << this->_name << "]: Hey everybody! Check out my package!" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "FRAGTRAP [" << this->_name << "]: Let's get this party started!" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FRAGTRAP [" << this->_name << "]: Ow hohoho, that hurts! Yipes!" << std::endl;
	return ;
}

void	FragTrap::vaultHunter_dot_exe(std::string const &target)
{
	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::string	attacksFRAGTRAP [5] = { "Grenade", "Sniper", "Shotgun", "C4", "Flamethrower" };

		std::cout << "FRAGTRAP [" << this->_name << "]: Hit " << target << " with a " << attacksFRAGTRAP [rand() % 5] << "!" << std::endl;
	}
	else
		std::cout << "FRAGTRAP [" << this->_name << "]: I don't have enough energy left for this move..." << std::endl;
	return ;
}
