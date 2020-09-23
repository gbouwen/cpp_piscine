/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:51:00 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/23 11:24:44 by gbouwen       ########   odam.nl         */
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

Brain const		&Human::getBrain(void) const
{
	return (this->_brain);
}

Brain const		*Human::identify(void) const
{
	return (this->_brain.identify());
}
