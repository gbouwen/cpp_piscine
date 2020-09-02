/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 13:40:10 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/02 13:44:21 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy("Super Mutant", 170)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

void	SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (damage > 0)
		this->_hp -= damage;
	return ;
}
