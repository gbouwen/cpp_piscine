/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:36:01 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/08 10:47:52 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	std::cout << "- ZombieEvent constructor called!" << std::endl;
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "- ZombieEvent destructor called!" << std::endl;
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
	return ;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(this->_type, name);
	return (zombie);
}

Zombie	*ZombieEvent::randomChump(void)
{
	std::string names[8] = { "Bill", "Bob", "Joe", "James", "Michael", "Richard", "John", "Steve" };

	Zombie	*zombie = new Zombie(this->_type, names[rand() % 8]);
	return (zombie);
}
