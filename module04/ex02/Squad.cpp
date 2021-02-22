/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 11:59:55 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/11/17 17:39:21 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
	this->_count = 0;
	this->_maxSize = 8;
	this->_marines = new ISpaceMarine*[this->_maxSize];
	return ;
}

Squad::Squad(Squad const &src)
{
	this->_count = src._count;
	this->_maxSize = src._maxSize;
	for (int i = 0; i < this->_count; i++)
		delete (this->_marines[i]);
	delete [] (this->_marines);
	this->_marines = new ISpaceMarine*[this->_maxSize];
	for (int i = 0; i < this->_count; i++)
		this->_marines[i] = src._marines[i]->clone();
	return ;
}

Squad::~Squad(void)
{
	for (int i = 0; i < this->_count; i++)
		delete (this->_marines[i]);
	delete [] (this->_marines);
	return ;
}

Squad	&Squad::operator=(Squad const &rhs)
{
	if (this != &rhs)
	{
		this->_count = rhs._count;
		this->_maxSize = rhs._maxSize;
		for (int i = 0; i < this->_count; i++)
			delete (this->_marines[i]);
		delete [] (this->_marines);
		this->_marines = new ISpaceMarine*[this->_maxSize];
		for (int i = 0; i < this->_count; i++)
			this->_marines[i] = rhs._marines[i]->clone();
	}
	return (*this);
}

int				Squad::getCount(void) const
{
	return (this->_count);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	if (n < 0 || n > this->_maxSize)
		return (NULL);
	return (this->_marines[n]);
}

int				Squad::push(ISpaceMarine *newMarine)
{
	if (this->_count == this->_maxSize || newMarine == NULL)
		return (this->_count);
	for (int i = 0; i < this->_count; i++)
	{
		if (this->_marines[i] == newMarine)
			return (this->_count);
	}
	this->_marines[this->_count] = newMarine;
	this->_count++;
	return (this->_count);
}
