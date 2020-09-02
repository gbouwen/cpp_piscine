/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 13:10:14 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/02 13:31:04 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{

public:

	Enemy(void);
	Enemy(std::string const &type, int hp);
	Enemy(Enemy const &src);
	virtual	~Enemy(void);

	Enemy	&operator=(Enemy const &rhs);

	std::string	const	getType(void) const;
	int					getHP(void) const;
	virtual void		takeDamage(int damage);

protected:

	std::string const 	&_type;
	int					_hp
};

#endif
