/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 10:53:02 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/08 15:16:17 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "ICharacter.hpp"

class Ice : public AMateria
{

public:

	Ice(void);
	~Ice(void);

	Ice		*clone(void) const;
	void	use(ICharacter &target);
};

#endif
