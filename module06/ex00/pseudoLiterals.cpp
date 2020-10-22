/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pseudoLiterals.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/19 13:19:51 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/19 13:21:12 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

void	printPseudoLiterals(std::string input)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (input == "nan")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (input == "+inf")
	{
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	else if (input == "-inf")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	return ;
}

bool	checkPseudoLiterals(std::string input)
{
	if (input == "nan" || input == "nanf")
	{
		printPseudoLiterals("nan");
		return (true);
	}
	else if (input == "+inf" || input == "+inff")
	{
		printPseudoLiterals("+inf");
		return (true);
	}
	else if (input == "-inf" || input == "-inff")
	{
		printPseudoLiterals("-inf");
		return (true);
	}
	return (false);
}

