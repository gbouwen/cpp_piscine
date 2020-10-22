/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 11:42:18 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/15 10:55:34 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 21, 5)
{
	std::cout << "PlasmaRifle is born" << std::endl;
	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
	std::cout << "PlasmaRifle is dead" << std::endl;
	return ;
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}
