/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 16:30:44 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/23 10:56:51 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main(void)
{
	srand(time(NULL));
	ZombieHorde horde(10);
	horde.announce();
	return (0);
}
