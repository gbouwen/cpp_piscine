/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 11:16:55 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/19 14:55:36 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int	main(int ac, char **av)
{
	bool	isPseudoLiteral;
	bool	valid;
	int		type;

	if (ac != 2)
	{
		std::cout << "Need one argument for this program to work" << std::endl;
		return (-1);
	}
	isPseudoLiteral = checkPseudoLiterals(av[1]);
	if (isPseudoLiteral)
		return (0);
	valid = validateString(av[1]);
	if (!valid)
	{
		printImpossible();
		return (-1);
	}
	type = detectType(av[1]);
	if (type == 0)
	{
		printImpossible();
		return (-1);
	}
	print(av[1], type);
	return (0);
}
