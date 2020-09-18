/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 11:16:55 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 17:50:08 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convertor.hpp"

int	main(int ac, char **av)
{
	t_data	data;
	int		type;

	if (ac != 2)
	{
		std::cout << "Need one argument for this program to work" << std::endl;
		return (-1);
	}
	type = detectType(av[1]);
	if (type == 0)
	{
		std::cout << "Error trying to validate string" << std::endl;
		return (-1);
	}
	setType(av[1], type, &data);
	castTypes(type, &data);
	printEverything(type, data);
	return (0);
}
