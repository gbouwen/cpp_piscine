/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Goblin.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 13:45:03 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/15 10:42:30 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GOBLIN_HPP
# define GOBLIN_HPP

#include "Enemy.hpp"

class Goblin : public Enemy
{

public:

	Goblin(void);
	virtual ~Goblin(void);

};

#endif
