/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 13:48:52 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/02 14:38:40 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{

public:

	Character(void);
	Character(std::string const &name);
	Character(Character const &src);
	~Character(void);

	Character	&operator=(Character const &rhs);

	void	recoverAP(void);
	void	equip(AWeapon *weapon);
	void	attack(Enemy *enemy);

	std::string const	getName(void) const;
	int const			getAP(void)	const;
	std::string	const	getWeaponName(void) const;

private:

	std::string &_name;
	int			_ap;
	AWeapon		*weapon;
};

std::ostream	&operator<<(std::ostream &o, Character const &src);

#endif
