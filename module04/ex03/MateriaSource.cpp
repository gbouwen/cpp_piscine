/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 14:20:09 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/01 11:12:12 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _count(0)
{
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (unsigned int i = 0; i < this->_count; i++)
		delete (this->_knownMateria[i]);
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (unsigned int i = 0; i < this->_count; i++)
			delete (this->_knownMateria[i]);
		this->_count = rhs._count;
		for (unsigned int i = 0; i < this->_count; i++)
			this->_knownMateria[i] = rhs._knownMateria[i]->clone();
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_count >= 4 || materia == NULL)
		return ;
	this->_knownMateria[this->_count] = materia;
	this->_count++;
	return ;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (unsigned int i = 0; i < this->_count; i++)
	{
		if (this->_knownMateria[i]->getType() == type)
			return (this->_knownMateria[i]->clone());
	}
	return (NULL);
}
