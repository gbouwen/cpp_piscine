/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 14:19:37 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/16 10:12:47 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
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

private:

	unsigned int	_count;
	AMateria		*_knownMateria[4];
};

#endif
