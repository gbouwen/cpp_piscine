/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 13:16:24 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/02 13:44:28 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
	return ;
}

Enemy::Enemy(std::string type, int hp) : _type(type), _hp(hp)
{
	return ;
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

Enemy	&Enemy::operator=(Enemy const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_hp = rhs._hp;
	}
	return (*this);
}

std::string const	getType(void) const
{
	return (this->_type);
}

int					getHP(void) const
{
	return (this->_hp);
}

virtual void		takeDamage(int damage)
{
	if (damage > 0)
		this->_hp -= damage;
	return ;
}
