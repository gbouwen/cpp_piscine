/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 11:14:27 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/07 16:02:40 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure	*Cure::clone(void)
{

}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target._getName() << "'s wounds" << std::endl;
	this->_xp += 10;
	return ;
}
