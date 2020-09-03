/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 10:44:49 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/03 12:08:01 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_SQUAD_HPP
# define I_SQUAD_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad
{

public:

	virtual ~ISquad(void) {}

	virtual int				getCount(void) const = 0;
	virtual ISpaceMarine 	*getUnit(int) const = 0;
	virtual int 			push(ISpaceMarine *marine) = 0;
};

#endif
