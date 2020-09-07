/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 14:18:48 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/07 15:49:03 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("AMateria"), _xp(0)
{
	return ;
}

AMateria::AMateria(std::string const &type) : _type(type), _xp(0)
{
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_xp = rhs._xp;
	}
	return ;
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int		AMateria::getXP(void) const
{
	return (this->_xp);
}

void				AMateria::use(ICharacter &target);
{
	std::cout << "Used AMateria on " << target.getType() << std::endl;
	this-_xp += 10;
	return ;
}
