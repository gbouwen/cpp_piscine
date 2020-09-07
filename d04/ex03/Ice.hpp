/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 10:53:02 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/07 15:51:12 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# incluce "ICharacter.hpp"

class Ice : public AMateria
{

public:

	Ice(void);
	Ice(Ice const &src);
	~Ice(void);

	Ice	&operator=(Ice const &rhs);

	Ice		*clone(void);
	void	use(ICharacter &target);

};

#endif
