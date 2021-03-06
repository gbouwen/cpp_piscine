/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 13:35:30 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/14 10:36:14 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
	return ;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(Peon const &src)
{
	*this = src;
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon	&Peon::operator=(Peon const &rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
	return ;
}
