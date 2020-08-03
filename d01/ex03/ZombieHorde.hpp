/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 16:30:18 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/03 17:24:57 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{

public:

	ZombieHorde(int n);
	~ZombieHorde(void);

	void	announce(void);

private:

	int	_amount;
	Zombie	*_zombies;
};

#endif
