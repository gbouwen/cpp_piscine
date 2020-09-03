/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 11:59:55 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/03 15:25:14 by gbouwen       ########   odam.nl         */
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
	*this = src;
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
	if (this != rhs)
	{
		for (int i = 0; i < this->_count; i++)
			delete (this->_marines[i]);
		delete [] (this->_marines);
		this->_count = rhs.count;
		this->_maxSize = rhs.maxSize;
		this->_marines = new ISpaceMarine*[this->_maxSize];
		for (int i = 0; i < this->_count; i++)
			this->_marines[i] = rhs.marines[i].clone();
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

int				Squad::push(ISpaceMarine *marine)
{
	return (this->_count);
}
