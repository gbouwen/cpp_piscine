/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 14:19:14 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/16 10:41:38 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("default"), _count(0)
{
	return ;
}

Character::Character(std::string name) : _name(name), _count(0)
{
	return ;
}

Character::Character(Character const &src)
{
	if (this != &src)
	{
		for (unsigned int i = 0; i < this->_count; i++)
			delete (this->_inventory[i]);
		this->_name = src._name;
		this->_count = src._count;
		for (unsigned int i = 0; i < this->_count; i++)
			this->_inventory[i] = src._inventory[i]->clone();
	}
	return ;
}

Character::~Character(void)
{
	for (unsigned int i = 0; i < this->_count; i++)
		delete (this->_inventory[i]);
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		for (unsigned int i = 0; i < this->_count; i++)
			delete (this->_inventory[i]);
		this->_name = rhs._name;
		this->_count = rhs._count;
		for (unsigned int i = 0; i < this->_count; i++)
			this->_inventory[i] = rhs._inventory[i]->clone();
	}
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void				Character::equip(AMateria *materia)
{
	if (this->_count >= 4 || materia == NULL)
		return ;
	this->_inventory[this->_count] = materia->clone();
	this->_count++;
	return ;
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		delete (this->_inventory[idx]);
	return ;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	return ;
}
