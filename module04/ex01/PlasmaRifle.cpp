/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 11:42:18 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/14 11:38:27 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 21, 5)
{
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src)
{
	*this = src;
	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
	AWeapon::operator=(rhs);
	return (*this);
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}
