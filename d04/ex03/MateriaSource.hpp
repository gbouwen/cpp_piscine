/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 14:19:37 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/07 14:57:51 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{

public:

	MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	~MateriaSource(void);

	MateriaSource	&operator=(MateriaSource const &rhs);

	void		learnMateria(AMateria *materia);
	AMateria	*createMateria(std::string const &type);

};

#endif
