/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 16:30:11 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/03 17:29:48 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _amount(n)
{
	Zombie	*zombies = new Zombie[n];

	this->_zombies = zombies;
	std::cout << "- ZombieHorde constructor called!" << std::endl;
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "- ZombieHorde destructor called!" << std::endl;
	delete [] this->_zombies;
	return ;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_amount; i++)
		this->_zombies[i].announce();
	return ;
}
