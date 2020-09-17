/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 17:45:38 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 17:56:43 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convertor.hpp"

static void	printChar(t_data data)
{
	std::cout << "char: ";
	if (!isprint(data.charResult))
		std::cout << "Non displayable" << std::endl;
	else if (data.charResult > 126)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "'" << data.charResult << "'" << std::endl;
	return ;
}

static void	printInt(t_data data)
{
	std::cout << "int: " << data.intResult << std::endl;
	return ;
}

static void	printFloat(t_data data)
{
	std::cout << "float: " << data.floatResult << "f" << std::endl;
	return ;
}

static void	printDouble(t_data data)
{
	std::cout << "double: " << data.doubleResult << std::endl;
	return ;
}

void	printEverything(t_data data)
{
	printChar(data);
	printInt(data);
	printFloat(data);
	printDouble(data);
	return ;
}
