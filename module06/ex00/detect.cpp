/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convertor.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 11:57:51 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 17:20:25 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convertor.hpp"

static bool	detectChar(std::string input)
{
	if (input.length() == 1)
	{
		if (isprint(input[0]) && !isdigit(input[0]))
			return (true);
		if (!isprint(input[0]))
			return (false);
	}
	return (false);
}

static bool	detectInt(std::string input)
{
	long	converted;
	char	*p;

	converted = strtol(input.c_str(), &p, 10);
	if (*p)
		return (false);
	if (converted > std::numeric_limits<int>::max() || converted < std::numeric_limits<int>::min())
		return (false);
	return (true);
}

static bool	detectDouble(std::string input)
{
	if (input == "nan")
		return (true);
	else if (input == "-inf")
		return (true);
	else if (input == "+inf")
		return (true);
	else if (input[input.length() - 1] != 'f')
	{
		int	found = input.find(".");
		double res = atof(input.c_str());
		if (res != 0 && found != -1)
			return (true);
	}
	return (false);
}

static bool	detectFloat(std::string input)
{
	if (input == "nanf")
		return (true);
	else if (input == "-inff")
		return (true);
	else if (input == "+inff")
		return (true);
	else if (input[input.length() - 1] == 'f')
	{
		float res = static_cast<float>(atof(input.c_str()));
		if (res == std::numeric_limits<float>::infinity())
			return (false);
		if (res != 0)
			return (true);
	}
	return (false);
}

int		detectType(std::string input)
{
	bool detected;

	detected = detectChar(input);
	if (detected)
		return (CHAR);
	detected = detectInt(input);
	if (detected)
		return (INT);
	detected = detectDouble(input);
	if (detected)
		return (DOUBLE);
	detected = detectFloat(input);
	if (detected)
		return (FLOAT);
	return (0);
}
