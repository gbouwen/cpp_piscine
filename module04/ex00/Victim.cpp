/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 13:35:18 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/14 10:36:14 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
	return ;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
	return ;
}

Victim::Victim(Victim const &src)
{
	*this = src;
	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
	return ;
}

Victim	&Victim::operator=(Victim const &rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

std::string	Victim::getName(void) const
{
	return (this->_name);
}

void		Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
	return ;
}

std::ostream	&operator<<(std::ostream &o, Victim const &src)
{
	std::cout << "I'm " << src.getName() << " and I like otters!" << std::endl;
	return (o);
}
