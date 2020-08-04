/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 13:05:22 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/04 14:22:03 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon
{

public:

	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	const std::string&	getType(void) const;
	void				setType(std::string);

private:

	std::string	_type;
};

#endif
