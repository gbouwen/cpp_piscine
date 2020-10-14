/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 12:01:14 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/14 11:19:31 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8)
{
	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}
