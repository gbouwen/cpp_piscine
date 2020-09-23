/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:01:01 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/26 16:26:33 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = "DEFAULT";
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "1NinjaTrap here!" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "2NinjaTrap here!" << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NinjaTrap out!" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(FragTrap &ft)
{
	std::cout << "[" << this->_name << "]: What are you going to do, FragTrap? Fight me?" << std::endl;
	ft.vaultHunter_dot_exe(this->_name);
	return ;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &st)
{
	std::cout << "[" << this->_name << "]: What are you going to do, ScavTrap? Challenge me?" << std::endl;
	st.challengeNewcomer(this->_name);
	return ;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &nt)
{
	std::cout << "[" << this->_name << "]: What are you going to do, NinjaTrap? Stab me?" << std::endl;
	nt.meleeAttack(this->_name);
	return ;
}
