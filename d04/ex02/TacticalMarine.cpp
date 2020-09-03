/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 11:41:06 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/03 14:42:48 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	*this = src;
	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

TacticalMarine	&TacticalMarine::operator=(TacticalMarine const &rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}

TacticalMarine	*TacticalMarine::clone(void) const
{
	TacticalMarine	*clone = new TacticalMarine(*this);
	return (clone);
}

void			TacticalMarine::battleCry(void) const
{
	std::cout << "for the holy PLOT!" << std::endl;
	return ;
}

void			TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return ;
}

void			TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
	return ;
}
