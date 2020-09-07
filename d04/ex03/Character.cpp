/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 14:19:14 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/07 14:54:02 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return ;
}

Character::Character(std::string name) : _name(name)
{
	return ;
}

Character::Character(Character const &src)
{
	return ;
}

Character::~Character(Character const &rhs)
{
	return ;
}

Character	&Character::operator=(Characer const &rhs)
{
	return ;
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void				Character::equip(AMateria *m)
{
	return ;
}

void				Character::unequip(int idx)
{
	return ;
}

void				Character::use(int idx, ICharacter &target)
{
	return ;
}
