/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 11:05:58 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/03 11:34:43 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_SPACE_MARINE_HPP
# define I_SPACE_MARINE_HPP

#include <iostream>
class ISpaceMarine
{

public:

	virtual ~ISpaceMarine(void) {}

	virtual ISpaceMarine	*clone(void) const = 0;
	virtual void			battleCry(void) const = 0;
	virtual void			rangedAttack(void) const = 0;
	virtual void			meleeAttack(void) const = 0;
};
#endif
