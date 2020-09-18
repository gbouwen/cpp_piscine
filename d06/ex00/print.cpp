/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 17:45:38 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/18 13:58:56 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convertor.hpp"

static void	printChar(t_data data)
{
	std::cout << "char: ";
	if (data.charResult > 126 || data.charResult < 0)
		std::cout << "impossible" << std::endl;
	else if (!isprint(data.charResult))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << data.charResult << "'" << std::endl;
	return ;
}

static void	printInt(t_data data)
{
	if (data.intResult != data.doubleResult)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << data.intResult << std::endl;
	return ;
}

static void	printFloat(int type, t_data data)
{
	if (type == CHAR || type == INT || data.floatResult == static_cast<int>(data.floatResult))
		std::cout << "float: " << std::fixed << std::setprecision(1) << data.floatResult << "f" << std::endl;
	else
		std::cout << "float: " << data.floatResult << "f" << std::endl;
	return ;
}

static void	printDouble(int type, t_data data)
{
	if (type == CHAR || type == INT || data.doubleResult == static_cast<int>(data.doubleResult))
		std::cout << "double: " << std::fixed << std::setprecision(1) << data.doubleResult << std::endl;
	else
		std::cout << "double: " << data.doubleResult << std::endl;
	return ;
}

void	printEverything(int type, t_data data)
{
	printChar(data);
	printInt(data);
	printFloat(type, data);
	printDouble(type, data);
	return ;
}
