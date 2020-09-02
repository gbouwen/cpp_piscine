/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 11:15:33 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/02 12:06:04 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{

public:

	AWeapon(void);
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &src);
	~AWeapon(void);

	AWeapon	&operator=(AWeapon const &rhs);

	std::string	getName(void) const;
	int			getDamage(void) const;
	int			getAPCost(void) const;

	virtual void	attack(void) const = 0;

protected:

	std::string	_name;
	int			_damage;
	int			_apCost;
};

#endif
