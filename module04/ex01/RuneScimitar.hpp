/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RuneScimitar.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 11:58:27 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/15 10:42:48 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUNESCIMITAR_HPP
# define RUNESCIMITAR_HPP

#include "AWeapon.hpp"

class RuneScimitar : public AWeapon
{

public:

	RuneScimitar(void);
	virtual	~RuneScimitar(void);

	void	attack(void) const;
};

#endif
