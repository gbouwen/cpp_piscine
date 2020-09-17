/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 11:16:55 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 16:55:53 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convertor.hpp"

int	main(int ac, char **av)
{
   /* char	charResult;*/
	//int		intResult;
	//float	floatResult;
	/*double	doubleResult;*/
	int		type;

	if (ac != 2)
	{
		std::cout << "Need one argument for this program to work" << std::endl;
		return (-1);
	}
	try
	{
		type = detectType(av[1]);
		if (type == 0)
			std::cout << "error" << std::endl;
		if (type == 1)
			std::cout << "char" << std::endl;
		if (type == 2)
			std::cout << "int" << std::endl;
		if (type == 3)
			std::cout << "float" << std::endl;
		if (type == 4)
			std::cout << "double" << std::endl;
   		/*castTypes(&charResult, &intResult, &floatResult, &doubleResult);*/
		/*printEverything(charResult, intResult, floatResult, doubleResult);*/
	}
	catch (int error)
	{
		std::cout << "Something went wrong" << std::endl;
	}
   /* std::cout << "char: " << charResult << std::endl;*/
	//std::cout << "int: " << intResult << std::endl;
	//std::cout << "float: " << floatResult << std::endl;
	/*std::cout << "double: " << doubleResult << std::endl;*/
	return (0);
}

// casten -> wat is de originele type? hoe check je welke variable is ge-set?
// convert -> cast het op de juiste manier, moet ook error checks uitvoeren
// printResult -> print het op de juiste manier
