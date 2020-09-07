/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 11:07:52 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/07 11:14:15 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{

public:

	Cure(void);
	Cure(Cure const &src);
	~Cure(void);

	Cure	&operator=(Cure const &rhs);

	Cure	*clone(void);
	void	use(ICharacter &target);

private:

	unsigned int	_xp;
};

#endif
