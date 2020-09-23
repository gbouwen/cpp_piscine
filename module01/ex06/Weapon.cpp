/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 13:05:17 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/24 11:54:11 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string	const	&Weapon::getType(void) const
{
	return (this->_type);
}

void				Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}
