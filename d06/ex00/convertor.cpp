/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convertor.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 11:57:51 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 14:58:37 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convertor.hpp"

char	detectChar(std::string input)
{
	if (input.length() == 1)
	{
		if (isprint(input[0]) && !isdigit(input[0]))
			return (input[0]);
		if (!isprint(input[0]))
			throw (-1);
	}
	return (0);
}

int		detectInt(std::string input)
{
	long	converted;
	char	*p;

	converted = strtol(input.c_str(), &p, 10);
	if (*p)
		return (0);
	if (converted > std::numeric_limits<int>::max() || converted < std::numeric_limits<int>::min())
		throw (-1);
	return (static_cast<int>(converted));
}

float	detectFloat(std::string input)
{
	if (input == "nanf")
		return (std::numeric_limits<float>::quiet_NaN());
	if (input == "-inff")
		return (-std::numeric_limits<float>::infinity());
	if (input == "+inff")
		return (std::numeric_limits<float>::infinity());
	if (input[input.length() - 1] == 'f')
		return (atof(input.c_str()));
	return (0);
}
