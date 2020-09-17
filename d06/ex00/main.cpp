/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 11:16:55 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 14:21:04 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convertor.hpp"

int	main(int ac, char **av)
{
	char	charResult;
	int		intResult;
	//float	floatResult;
	/*double	doubleResult;*/

	if (ac != 2)
	{
		std::cout << "Need one argument for this program to work" << std::endl;
		return (-1);
	}
	try
	{
		charResult = detectChar(av[1]);
		intResult = detectInt(av[1]);
		//floatResult = detectFloat(av[1]);
		//doubleResult = detectDouble(av[1]);
		//castTypes(&charResult, &intResult, &floatResult, &doubleResult);
		/*printEverything(charResult, intResult, floatResult, doubleResult);*/
	}
	catch (int error)
	{
		std::cout << "Something went wrong" << std::endl;
	}
	std::cout << "char: " << charResult << std::endl;
	std::cout << "int: " << intResult << std::endl;
	return (0);
}

// haal getal uit string
// check welk datatype het is
// acquire -> zorgt ervoor dat het op de goede manier gecast wordt naar de 'echte' value
// convert -> cast het op de juiste manier, moet ook error checks uitvoeren
// printResult -> print het op de juiste manier
