/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 12:03:01 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/19 12:46:56 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Goblin.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RuneScimitar.hpp"

int	main(void)
{
	Character	*me = new Character("me");

	std::cout << *me;

	Enemy		*scorp = new RadScorpion();
	Enemy		*mutant = new SuperMutant();
	Enemy		*goblin = new Goblin();
	Enemy		gg(*goblin);
	Enemy		g = gg;
	AWeapon		*pr = new PlasmaRifle();
	AWeapon		*pf = new PowerFist();
	AWeapon		*rs = new RuneScimitar();
	PlasmaRifle	plasma;
	PlasmaRifle	*copy(&plasma);
	PlasmaRifle	assig = *copy;

	std::cout << "-------------------------------------" << std::endl;
	me->equip(pr);
	std::cout << *me;
	std::cout << "scorp->getHP(): " << scorp->getHP() << std::endl;
	me->attack(scorp);
	std::cout << *me;
	std::cout << "scorp->getHP(): " << scorp->getHP() << std::endl;
	me->attack(scorp);
	me->attack(scorp);
	me->attack(scorp);
	std::cout << "-------------------------------------" << std::endl;
	std::cout << *me;
	std::cout << "--- call recoverAP() 3 times ---" << std::endl;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	std::cout << "mutant->getHP(): " << mutant->getHP() << std::endl;
	me->attack(mutant);
	std::cout << "mutant->getHP(): " << mutant->getHP() << std::endl;
	std::cout << *me;
	me->equip(rs);
	me->attack(mutant);
	me->attack(mutant);
	std::cout << "-------------------------------------" << std::endl;
	std::cout << *me;
	me->attack(goblin);
	me->attack(goblin);
	me->attack(goblin);
	me->attack(goblin);
	me->attack(goblin);

	delete (me);
	delete (goblin);
	delete (pr);
	delete (pf);
	delete (rs);
	return (0);
}
