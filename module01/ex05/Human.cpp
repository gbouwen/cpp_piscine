/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:51:00 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/08 11:26:38 by gbouwen       ########   odam.nl         */
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

Brain const	&Human::getBrain(void) const
{
	return (this->_brain);
}

Brain const	*Human::identify(void) const
{
	return (this->_brain.identify());
}
