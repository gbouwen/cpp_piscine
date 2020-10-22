/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/19 13:17:58 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/19 14:52:04 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

static void	castPrintFromChar(char c)
{
	std::cout << "char: " << "'" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
	return ;
}

static void	castPrintFromInt(int i)
{
	if (i > 126 || i < 0)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(i)))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
	return ;
}

static void castPrintFromFloat(float f)
{
	if ((f > 126 || f < 0) || !isprint(static_cast<char>(f)))
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(f)))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << static_cast<char>(f) << "'" << std::endl;
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
	return ;
}

static void	castPrintFromDouble(double d)
{
	if ((d > 126 || d < 0) || !isprint(static_cast<char>(d)))
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(d)))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << static_cast<char>(d) << "'" << std::endl;
	if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (d > std::numeric_limits<float>::max() || d < -std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	return ;
}

void	print(std::string input, int type)
{
	char	c;
	int		i;
	float	f;
	double	d;

	if (type == 1)
	{
		c = input[0];
		castPrintFromChar(c);
	}
	if (type == 2)
	{
		i = atoi(input.c_str());
		castPrintFromInt(i);
	}
	if (type == 3)
	{
		f = static_cast<float>(atof(input.c_str()));
		castPrintFromFloat(f);
	}
	if (type == 4)
	{
		d = atof(input.c_str());
		castPrintFromDouble(d);
	}
	return ;
}

void	printImpossible(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
	return ;
}
