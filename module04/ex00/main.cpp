/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 13:35:37 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/15 11:09:31 by gbouwen       ########   odam.nl         */
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
	Zombie		jj(john);
	Zombie		j = jj;

	std::cout << robert << jim << joe << jeff << john << jj << j;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jeff);
	robert.polymorph(john);
	return (0);
}
