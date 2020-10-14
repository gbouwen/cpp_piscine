/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 13:35:30 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/14 12:30:54 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name) : Victim(name)
{
	std::cout << "I'm zombie." << std::endl;
	return ;
}

Zombie::Zombie(Zombie const &src)
{
	*this = src;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie dead." << std::endl;
	return ;
}

Zombie	&Zombie::operator=(Zombie const &rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

void	Zombie::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink whale!" << std::endl;
	return ;
}
