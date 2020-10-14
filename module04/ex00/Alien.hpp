/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Alien.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 13:35:34 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/14 12:29:42 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

class Alien : public Victim
{

public:

	Alien(std::string name);
	Alien(Alien const &src);
	virtual	~Alien(void);

	Alien	&operator=(Alien const &rhs);

	void	getPolymorphed(void) const;

private:

	Alien(void);
};
