/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 11:51:04 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/03 14:59:19 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{

public:

	Squad(void);
	Squad(Squad const &src);
	~Squad(void);

	Squad	&operator=(Squad const &rhs);

	int				getCount(void) const;
	ISpaceMarine	*getUnit(int) const;
	int				push(ISpaceMarine *marine);

private:

	int	_count;
	int	_maxSize;
	ISpaceMarines	**_marines;
};

#endif
