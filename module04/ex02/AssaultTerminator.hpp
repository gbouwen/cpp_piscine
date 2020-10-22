/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 11:34:10 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/15 11:26:21 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

public:

	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const &src);
	~AssaultTerminator(void);

	AssaultTerminator	&operator=(AssaultTerminator const &src);

	AssaultTerminator	*clone(void) const;
	void				battleCry(void) const;
	void				rangedAttack(void) const;
	void				meleeAttack(void) const;

};

#endif
