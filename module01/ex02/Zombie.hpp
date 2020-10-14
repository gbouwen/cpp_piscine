/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:35:14 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/08 10:45:24 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{

public:

	Zombie(void);
	Zombie(std::string _type, std::string _name);
	~Zombie(void);

	void	announce(void) const;

private:

	std::string _type;
	std::string	_name;
};

#endif
