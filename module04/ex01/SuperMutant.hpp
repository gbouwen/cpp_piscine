/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 13:30:14 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/14 11:23:26 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{

public:

	SuperMutant(void);
	virtual ~SuperMutant(void);

	void	takeDamage(int damage);
};

#endif
