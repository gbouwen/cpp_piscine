/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   set.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 17:20:35 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 17:34:52 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convertor.hpp"

static void	setChar(std::string input, t_data *data)
{
	data->charResult = input[0];
	return ;
}

static void	setInt(std::string input, t_data *data)
{
	data->intResult = atoi(input.c_str());
	return ;
}

static void	setFloat(std::string input, t_data *data)
{
	data->floatResult = static_cast<float>(atof(input.c_str()));
	return ;
}

static void	setDouble(std::string input, t_data *data)
{
	data->doubleResult = atof(input.c_str());
	return ;
}

void		setType(std::string input, int type, t_data *data)
{
	if (type == CHAR)
		setChar(input, data);
	if (type == INT)
		setInt(input, data);
	if (type == FLOAT)
		setFloat(input, data);
	if (type == DOUBLE)
		setDouble(input, data);
	return ;
}
