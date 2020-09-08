/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 11:14:27 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/08 16:43:33 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure	*Cure::clone(void) const
{
	Cure *clone = new Cure(*this);
	return (clone);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
	this->_xp += 10;
	return ;
}
