/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 12:01:14 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/15 10:55:59 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8)
{
	std::cout << "PowerFist is born" << std::endl;
	return ;
}

PowerFist::~PowerFist(void)
{
	std::cout << "PowerFist is dead" << std::endl;
	return ;
}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}
