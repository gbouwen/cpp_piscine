/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:01:01 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/13 10:59:48 by gbouwen       ########   odam.nl         */
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
	std::cout << "NinjaTrap default constructor here!" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	*this = src;
	std::cout << "NinjaTrap copy constructor here!" << std::endl;
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
	std::cout << "NinjaTrap name constructor here!" << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NinjaTrap out!" << std::endl;
	return ;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs)
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
	std::cout << "[" << this->_name << "]: NinjaTap assignation overload here!" << std::endl;
	return (*this);
}

void	NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "Ninja ranged attack on " << target << "! Did " << this->_rangedAttackDamage << " damage!" << std::endl;
	return ;
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "Ninja melee attack on " << target << "! Did " << this->_meleeAttackDamage << " damage!" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &ct)
{
	std::cout << "[" << this->_name << "]: What are you going to do, ClapTrap?" << std::endl;
	(void)ct;
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
