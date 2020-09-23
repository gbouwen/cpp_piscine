/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cast.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 17:35:41 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/18 13:59:46 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convertor.hpp"

// handle overflow

void	castFromChar(t_data *data)
{
	data->intResult = static_cast<int>(data->charResult);
	data->floatResult = static_cast<float>(data->charResult);
	data->doubleResult = static_cast<double>(data->charResult);
	return ;
}

void	castFromInt(t_data *data)
{
	data->charResult = static_cast<char>(data->intResult);
	data->floatResult = static_cast<float>(data->intResult);
	data->doubleResult = static_cast<double>(data->intResult);
	return ;
}

void	castFromFloat(t_data *data)
{
	if (isnan(data->floatResult) || isinf(data->floatResult))
		data->charResult = -1;
	else
		data->charResult = static_cast<char>(data->floatResult);
	if (data->floatResult < std::numeric_limits<int>::min() || data->floatResult > std::numeric_limits<int>::max())
		data->intResult = -1;
	else
		data->intResult = static_cast<int>(data->floatResult);
	data->doubleResult = static_cast<double>(data->floatResult);
}

void	castFromDouble(t_data *data)
{
	if (isnan(data->doubleResult) || isinf(data->doubleResult))
		data->charResult = -1;
	else
		data->charResult = static_cast<char>(data->doubleResult);
	if (data->doubleResult < std::numeric_limits<int>::min() || data->doubleResult > std::numeric_limits<int>::max())
		data->intResult = 0;
	else
		data->intResult = static_cast<int>(data->doubleResult);
	data->floatResult = static_cast<float>(data->doubleResult);
}

void	castTypes(int type, t_data *data)
{
	if (type == CHAR)
		castFromChar(data);
	if (type == INT)
		castFromInt(data);
	if (type == FLOAT)
		castFromFloat(data);
	if (type == DOUBLE)
		castFromDouble(data);
	return ;
}
