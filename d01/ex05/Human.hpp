/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:51:04 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/04 11:49:46 by gbouwen       ########   odam.nl         */
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

	const Brain&	getBrain(void);
	const Brain		*identify(void) const;

private:

	const Brain	_brain;

};

#endif
