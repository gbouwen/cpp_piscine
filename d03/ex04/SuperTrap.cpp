/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:09:47 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/26 16:30:07 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = "DEFAULT";
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "1SuperTrap here!" << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "2SuperTrap here!" << std::endl;
	return ;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SuperTrap out!" << std::endl;
	return ;
}
