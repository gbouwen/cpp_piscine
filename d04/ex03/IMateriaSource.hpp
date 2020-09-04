/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 11:47:59 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/04 12:02:06 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_HPP
# define IMATERIA_SOURCE_HPP

class IMateriaSource
{

public:

	virtual ~IMateriaSource(void) {}

	virtual void		learnMateria(AMateria *materia) = 0;
	virtual AMateria	*createMateria(std::string const &type) = 0;
}

#endif
