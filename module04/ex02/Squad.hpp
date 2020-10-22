/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 11:51:04 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/15 11:45:55 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{

public:

	Squad(void);
	Squad(Squad const &src);
	~Squad(void);

	Squad	&operator=(Squad const &rhs);

	int				getCount(void) const;
	ISpaceMarine	*getUnit(int) const;
	int				push(ISpaceMarine *newMarine);

private:

	int	_count;
	int	_maxSize;
	ISpaceMarine	**_marines;
};

#endif
