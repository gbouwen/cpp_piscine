/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 11:41:06 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/03 14:43:55 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src)
{
	*this = src;
	return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back..." << std::endl;
	return ;
}

AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}

AssaultTerminator	*AssaultTerminator::clone(void) const
{
	AssaultTerminator	*clone = new AssaultTerminator(*this);
	return (clone);
}

void				AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return ;
}

void				AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

void				AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
	return ;
}
