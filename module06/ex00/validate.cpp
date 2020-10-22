/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validate.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/19 13:23:04 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/19 14:13:42 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

bool	validateString(std::string input)
{
	unsigned int 	index = 0;
	unsigned int	pointCounter = 0;

	if (input[0] == '+' || input[0] == '-')
		index++;
	for (unsigned int i = index; i < input.length() - 1; i++)
	{
		if (input[i] == '.')
			pointCounter++;
		if (pointCounter > 1)
			return (false);
		if (!isdigit(input[i]) && input[i] != '.')
			return (false);
	}
	return (true);
}
