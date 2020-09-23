/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 12:05:39 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/04 14:05:38 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int	main(void)
{
	ISpaceMarine	*bob = new TacticalMarine;
	ISpaceMarine	*jim = new AssaultTerminator;
	ISpaceMarine	*boba = new TacticalMarine;
	ISpaceMarine	*bobb = new TacticalMarine;
	ISpaceMarine	*bobc = new TacticalMarine;
	ISpaceMarine	*bobd = new TacticalMarine;
	ISpaceMarine	*bobe = new TacticalMarine;
	ISpaceMarine	*bobg = new TacticalMarine;

	ISquad *vlc = new Squad;
	vlc->push(bob);
	vlc->push(bob);
	vlc->push(NULL);
	vlc->push(jim);
	vlc->push(boba);
	vlc->push(bobb);
	vlc->push(bobc);
	vlc->push(bobd);
	vlc->push(bobe);
	vlc->push(bobg);

	ISpaceMarine	*no = vlc->getUnit(12);
	if (no == NULL)
		std::cout << "ERROR: Couldn't get unit" << std::endl;
	for (int i = 0; i < vlc->getCount(); i++)
	{
		ISpaceMarine	*cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete (vlc);
	return (0);
}
