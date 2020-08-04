/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:51:00 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/04 11:49:44 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	return ;
}

Human::~Human(void)
{
	return ;
}

const Brain&	Human::getBrain(void)
{
	return (this->_brain);
}

const Brain		*Human::identify(void) const
{
	return (this->_brain.identify());
}
