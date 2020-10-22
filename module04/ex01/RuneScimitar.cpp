/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RuneScimitar.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 12:01:14 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/15 10:56:20 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RuneScimitar.hpp"

RuneScimitar::RuneScimitar(void) : AWeapon("Rune Scimitar", 100, 5)
{
	std::cout << "RuneScimitar is born" << std::endl;
	return ;
}

RuneScimitar::~RuneScimitar(void)
{
	std::cout << "RuneScimitar is dead" << std::endl;
	return ;
}

void	RuneScimitar::attack(void) const
{
	std::cout << "*Rune Scimitar noise*" << std::endl;
	return ;
}
