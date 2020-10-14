/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 13:35:34 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/14 12:30:58 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

class Zombie : public Victim
{

public:

	Zombie(std::string name);
	Zombie(Zombie const &src);
	virtual	~Zombie(void);

	Zombie	&operator=(Zombie const &rhs);

	void	getPolymorphed(void) const;

private:

	Zombie(void);
};
