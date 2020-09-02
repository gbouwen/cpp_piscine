/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 13:57:35 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/02 16:21:40 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("default"), _ap(40), _weapon(NULL)
{
	return ;
}

Character::Character(std::string const &name) : _name(name), _ap(40), _weapon(NULL)
{
	return ;
}

Character::Character(Character const &src)
{
	*this = src;
	return ;
}

Character::~Character(void)
{
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_ap = rhs._ap;
		this->_weapon = rhs._weapon;
	}
	return (*this);
}

void	Character::recoverAP(void)
{
	if (this->_ap < 40)
		this->_ap += 10;
}

void	Character::attack(Enemy *target)
{
	if (target && this->_weapon && this->_ap >= this->_weapon->getAPCost())
	{
		std::cout << this->_name << " attacks " << target->getType() << " with a " << this->getWeaponName() << std::endl;
		this->_ap -= this->_weapon->getAPCost();
		this->_weapon->attack();
		target->takeDamage(this->_weapon->getDamage());
		if (target->getHP() <= 0)
			delete (target);
	}
	else
		std::cout << "no attack was possible! Recover your AP!" << std::endl;
	return ;
}

void	Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
	return ;
}

std::string const	Character::getName(void) const
{
	return (this->_name);
}

int 				Character::getAP(void) const
{
	return (this->_ap);
}

std::string const	Character::getWeaponName(void) const
{
	return (this->_weapon->getName());
}

int					Character::isWeapon(void) const
{
	if (this->_weapon)
		return (1);
	return (0);
}

std::ostream	&operator<<(std::ostream &o, Character const &src)
{
	if (src.isWeapon())
		std::cout << src.getName() << " has " << src.getAP() << " AP and wields a " << src.getWeaponName() << std::endl;
	else
		std::cout << src.getName() << " has " << src.getAP() << " AP and is unarmed" << std::endl;
	return (o);
}
