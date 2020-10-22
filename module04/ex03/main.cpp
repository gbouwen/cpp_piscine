/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 14:20:29 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/19 13:06:58 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int	main(void)
{
	IMateriaSource	*src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter	*me = new Character("me");

	AMateria	*ice;
	AMateria	*cure;

	ice = src->createMateria("ice");
	me->equip(ice);
	cure = src->createMateria("cure");
	me->equip(cure);

	Character	*bob = new Character("bob");

	std::cout << "1 ------" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "2 ------" << std::endl;
	ice->use(*bob);
	cure->use(*bob);
	std::cout << "3 ------" << std::endl;
	ICharacter	*copy(me);
	copy->use(0, *bob);
	copy->use(1, *bob);

	delete (bob);
	delete (me);
	delete (src);
	delete (ice);
	delete (cure);
	return (0);
}
