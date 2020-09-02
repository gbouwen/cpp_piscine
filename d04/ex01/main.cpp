/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 12:03:01 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/02 12:06:34 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int	main(void)
{
	AWeapon	*pr = new PlasmaRifle();
	AWeapon	*pf = new PowerFist();

	pr->attack();
	pf->attack();
	return (0);
}
