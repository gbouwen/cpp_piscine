/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:10:30 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/03 13:17:43 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, unsigned int age)
					: _name(name), _color(color), _age(age)
{
	std::cout << "Constructor called!" << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << "Destructor called!" << std::endl;
	return ;
}

void	Pony::jump(void) const
{
	std::cout << "Jump!" << std::endl;
	return ;
}

void	Pony::eat(void) const
{
	std::cout << "Eating..." << std::endl;
	return ;
}

void	Pony::sleep(void) const
{
	std::cout << "zzz..." << std::endl;
	return ;
}

void	Pony::getName(void) const
{
	std::cout << "My name is " << this->_name << std::endl;
	return ;
}

void	Pony::getColor(void) const
{
	std::cout << "My color is " << this->_color << std::endl;
	return ;
}

void	Pony::getAge(void) const
{
	std::cout << "My age is " << this->_age << std::endl;
	return ;
}
