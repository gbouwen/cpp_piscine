/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:36:05 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/18 15:14:45 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent	event;

	event.setZombieType("pirate");
	Zombie	*zombieA = event.newZombie("haha");
	zombieA->announce();
	delete zombieA;

	Zombie	zombieB = Zombie("TYPE", "NAME");
	zombieB.announce();

	Zombie	*zombieC = event.randomChump();
	zombieC->announce();
	delete zombieC;
	Zombie	*zombieD = event.randomChump();
	zombieD->announce();
	delete zombieD;
	Zombie	*zombieE = event.randomChump();
	zombieE->announce();
	delete zombieE;
	Zombie	*zombieF = event.randomChump();
	zombieF->announce();
	delete zombieF;

	return (0);
}
