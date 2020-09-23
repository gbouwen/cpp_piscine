/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 13:35:10 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/01 16:50:50 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{

public:

	Victim(std::string name);
	Victim(Victim const &src);
	~Victim(void);

	Victim	&operator=(Victim const &rhs);

	std::string		getName(void) const;
	virtual	void	getPolymorphed(void) const;

protected:

	Victim(void);

	std::string	_name;
};

std::ostream	&operator<<(std::ostream &o, Victim const &src);

#endif
