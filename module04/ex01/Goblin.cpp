/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Goblin.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 13:44:48 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/15 10:56:45 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Goblin.hpp"

Goblin::Goblin(void) : Enemy("Goblin", 10000)
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

Goblin::~Goblin(void)
{
	std::cout << "* sad goblin noise *" << std::endl;
	return ;
}
