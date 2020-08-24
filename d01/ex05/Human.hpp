/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:51:04 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/24 11:52:44 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{

public:

	Human(void);
	~Human(void);

	Brain const &getBrain(void);
	Brain const *identify(void) const;

private:

	Brain const	_brain;

};

#endif
