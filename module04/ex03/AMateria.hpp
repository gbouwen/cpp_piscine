/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 11:17:19 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/19 12:56:25 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

public:

	AMateria(void);
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
	virtual ~AMateria(void);

	AMateria	&operator=(AMateria const &rhs);

	std::string const	&getType(void) const;
	unsigned int		getXP(void) const;

	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);

private:

	std::string		_type;
	unsigned int	_xp;
};

#endif
