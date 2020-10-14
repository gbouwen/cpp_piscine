/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Alien.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 13:35:30 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/14 12:29:48 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Alien.hpp"

Alien::Alien(void)
{
	return ;
}

Alien::Alien(std::string name) : Victim(name)
{
	std::cout << "I'm alien." << std::endl;
	return ;
}

Alien::Alien(Alien const &src)
{
	*this = src;
	return ;
}

Alien::~Alien(void)
{
	std::cout << "Alien dead." << std::endl;
	return ;
}

Alien	&Alien::operator=(Alien const &rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

void	Alien::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink dolphin!" << std::endl;
	return ;
}
