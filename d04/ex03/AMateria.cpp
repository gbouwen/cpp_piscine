/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 14:18:48 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/07 14:54:14 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	return ;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
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
	if (this->_type == "ice")
	{
		std::cout << "* shoots an ice bolt at " << target->_name << std::endl;
		this->_xp += 10;
	}
	if (this->_type == "cure")
	{
		std::cout << "* heals " << target->_name << "'s wounds *" << std::endl;
		this->_xp += 10;
	}
}
