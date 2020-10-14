/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 11:26:01 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/14 11:07:20 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return ;
}

AWeapon::AWeapon(std::string const &name, int damage, int apcost) : _name(name), _damage(damage), _apCost(apcost)
{
	return ;
}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
	return ;
}

AWeapon::~AWeapon(void)
{
	return ;
}

AWeapon	&AWeapon::operator=(AWeapon const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_damage = rhs._damage;
		this->_apCost = rhs._apCost;
	}
	return (*this);
}

std::string	const	AWeapon::getName(void) const
{
	return (this->_name);
}

int					AWeapon::getDamage(void) const
{
	return (this->_damage);
}

int					AWeapon::getAPCost(void) const
{
	return (this->_apCost);
}
