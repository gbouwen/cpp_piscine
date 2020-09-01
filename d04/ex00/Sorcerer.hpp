/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                           :+:    :+:        */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 13:34:36 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/01 15:10:52 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>

class Sorcerer
{

public:

	Sorcerer(Sorcerer const &src);
	Sorcerer(std::string name, std::string title);
	~Sorcerer(void);

	Sorcerer	&operator=(Sorcerer const &rhs);

	std::string	getName(void) const;
	std::string	getTitle(void) const;

private:

	std::string	_name;
	std::string _title;

	Sorcerer(void);
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &src);

#endif
