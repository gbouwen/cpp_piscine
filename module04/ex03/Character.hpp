/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 13:40:41 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/08 15:44:30 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{

public:

	Character(void);
	Character(std::string name);
	Character(Character const &src);
	~Character(void);

	Character	&operator=(Character const &rhs);

	std::string const	&getName(void) const;
	void				equip(AMateria *materia);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);

private:

	std::string		_name;
	AMateria		*_inventory[4];
	unsigned int	_count;
};

#endif
