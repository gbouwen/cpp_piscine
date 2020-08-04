/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 13:05:47 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/04 14:46:20 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class	HumanA
{

public:

	HumanA(std::string name, Weapon &_weapon);
	~HumanA(void);

	void	attack(void);

private:

	std::string	_name;
	Weapon		&_weapon;

};

#endif
