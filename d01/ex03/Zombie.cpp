/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:35:09 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/03 16:44:10 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::string names[8] = { "aaa", "bbb", "ccc", "ddd", "eee", "fff", "ggg", "hhh" };

	this->_type = "Zomb";
	this->_name = names[rand() % 8];
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

void	Zombie::announce()
{
	std::cout << "<" + this->_name + " (" + this->_type + ")> " << "Braiiiiiiinnnssss..." << std::endl;
	return ;
}
