/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:36:05 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/23 10:49:08 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	{
		std::cout << "--- Start zombie on stack ---" << std::endl;

		Zombie	bob = Zombie("Water", "Bob");
		bob.announce();
	}
	std::cout << "--- End zombie on stack ---" << std::endl << std::endl;

	{
		std::cout << "--- Start zombies on heap ---" << std::endl;
		ZombieEvent	event;
		event.setZombieType("Fire");
		Zombie	*joe = event.newZombie("Joe");
		joe->announce();
		delete (joe);

		Zombie	*randomFirst = event.randomChump();
		randomFirst->announce();
		delete (randomFirst);

		Zombie	*randomSecond = event.randomChump();
		randomSecond->announce();
		delete (randomSecond);

		Zombie	*randomThird = event.randomChump();
		randomThird->announce();
		delete (randomThird);

	}
	std::cout << "--- End zombies on heap ---" << std::endl;
	return (0);
}
