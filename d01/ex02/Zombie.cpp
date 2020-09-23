/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:35:09 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/23 11:06:45 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "- Zombie constructor called!" << std::endl;
	return ;
}

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name)
{
	std::cout << "- Zombie constructor called!" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "- Zombie destructor called!" << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << "<" + this->_name + " (" + this->_type + ")> " << "Braiiiiiiinnnssss..." << std::endl;
	return ;
}
