/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 12:03:01 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/14 11:41:56 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int	main(void)
{
	Character	*me = new Character("me");

	std::cout << *me;

	Enemy		*scorp = new RadScorpion();
	Enemy		*mutant = new SuperMutant();
	AWeapon		*pr = new PlasmaRifle();
	AWeapon		*pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(scorp);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(scorp);
	std::cout << *me;
	me->attack(scorp);
	std::cout << *me;
	me->attack(mutant);
	std::cout << *me;
	me->attack(mutant);
	me->attack(mutant);
	std::cout << *me;
	me->attack(mutant);
	me->attack(mutant);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->equip(pf);
	me->attack(mutant);
	me->attack(mutant);
	me->attack(mutant);
	std::cout << *me;

	delete (me);
	delete (pr);
	delete (pf);
	return (0);
}
