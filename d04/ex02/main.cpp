/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 12:05:39 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/03 13:52:07 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int	main(void)
{
	ISpaceMarine	*bob = new TacticalMarine;
	ISpaceMarine	*jim = new AssaultTerminator;

	bob->battleCry();
	bob->rangedAttack();
	bob->meleeAttack();
	jim->battleCry();
	jim->rangedAttack();
	jim->meleeAttack();
	delete (bob);
	delete (jim);
	return (0);
}
