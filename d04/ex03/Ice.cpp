/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 10:55:06 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/07 15:57:46 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice		*Ice::clone(void) const
{

}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an icebolt at " << target.getName() << std::endl;
	this->_xp += 10;
	return ;
}
