/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 11:38:59 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/14 11:37:14 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

public:

	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const &src);
	virtual ~PlasmaRifle(void);

	PlasmaRifle &operator=(PlasmaRifle const &rhs);

	void	attack(void) const;
};

#endif
