/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 13:35:34 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/01 16:33:07 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

class Peon : public Victim
{

public:

	Peon(std::string name);
	~Peon(void);

	void	getPolymorphed(void) const;

private:

	Peon(void);
};
