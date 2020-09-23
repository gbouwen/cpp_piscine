/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 13:06:16 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/23 11:33:10 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class	HumanB
{

public:

	HumanB(std::string name);
	~HumanB(void);

	void	setWeapon(Weapon &weapon);
	void	attack(void);

private:

	std::string	_name;
	Weapon		*_weapon;

};

#endif
