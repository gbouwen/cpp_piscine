/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                           :+:    :+:        */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 13:34:36 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/01 16:12:34 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{

public:

	Sorcerer(Sorcerer const &src);
	Sorcerer(std::string name, std::string title);
	~Sorcerer(void);

	Sorcerer	&operator=(Sorcerer const &rhs);

	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void		polymorph(Victim const &victim) const;

private:

	Sorcerer(void);

	std::string	_name;
	std::string _title;
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &src);

#endif
