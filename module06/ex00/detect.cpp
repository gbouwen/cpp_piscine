/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   detect.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/19 13:21:26 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/19 14:55:26 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

static bool	detectChar(std::string input)
{
	if (input.length() == 1)
	{
		if (!isprint(input[0]) || isdigit(input[0]))
			return (false);
		return (true);
	}
	return (false);
}

static bool	detectInt(std::string input)
{
	double	value;

	value = atof(input.c_str());
	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		return (false);
	return (true);
}

static bool	detectFloat(std::string input)
{
	double	value;

	value = atof(input.c_str());
	if (value > std::numeric_limits<float>::max() || value < -std::numeric_limits<float>::max())
		return (false);
	if (input[input.length() - 1] != 'f')
		return (false);
	return (true);
}

static bool detectDouble(std::string input)
{
	unsigned int	index = 0;
	unsigned int	pointCounter = 0;

	if (input[0] == '-' || input[0] == '+')
		index++;
	for (unsigned int i = index; i < input.length(); i++)
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

int	detectType(std::string input)
{
	bool	detected;

	detected = detectChar(input);
	if (detected)
		return (1);
	detected = detectInt(input);
	if (detected)
		return (2);
	detected = detectFloat(input);
	if (detected)
		return (3);
	detected = detectDouble(input);
	if (detected)
		return (4);
	return (0);
}

