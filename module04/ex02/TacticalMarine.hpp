/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 11:34:10 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/15 11:26:30 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

public:

	TacticalMarine(void);
	TacticalMarine(TacticalMarine const &src);
	~TacticalMarine(void);

	TacticalMarine	&operator=(TacticalMarine const &src);

	TacticalMarine	*clone(void) const;
	void			battleCry(void) const;
	void			rangedAttack(void) const;
	void			meleeAttack(void) const;

};

#endif
