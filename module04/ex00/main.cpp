/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 13:35:37 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/14 12:32:02 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Alien.hpp"
#include "Zombie.hpp"

int	main(void)
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Alien		jeff("Jeff");
	Zombie		john("John");

	std::cout << robert << jim << joe << jeff << john;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jeff);
	robert.polymorph(john);
	return (0);
}
