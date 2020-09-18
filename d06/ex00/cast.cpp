/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cast.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 17:35:41 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 17:53:02 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convertor.hpp"

// handle overflow

void	castTypes(int type, t_data *data)
{
	if (type == CHAR)
	{
		data->intResult = static_cast<int>(data->charResult);
		data->floatResult = static_cast<float>(data->charResult);
		data->doubleResult = static_cast<double>(data->charResult);
	}
	if (type == INT)
	{
		data->charResult = static_cast<char>(data->intResult);
		data->floatResult = static_cast<float>(data->intResult);
		data->doubleResult = static_cast<double>(data->intResult);
	}
	if (type == FLOAT)
	{
		data->charResult = static_cast<char>(data->floatResult);
		data->intResult = static_cast<int>(data->floatResult);
		data->doubleResult = static_cast<double>(data->floatResult);
	}
	if (type == DOUBLE)
	{
		data->charResult = static_cast<char>(data->doubleResult);
		data->intResult = static_cast<int>(data->doubleResult);
		data->floatResult = static_cast<float>(data->doubleResult);
	}
	return ;
}
