/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 11:16:55 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 11:03:47 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

int	main(int ac, char **av)
{
	Convertor	conv;

	if (ac != 2)
	{
		std::cout << "Need one argument for this program to work" << std::endl;
		return (-1);
	}
	conv.acquire(av[1]);
	conv.printResults();
	return (0);
}

// haal getal uit av[1] als double
// check in welke range het getal valt (0 - 128), (INT_MIN - INT_MAX), (FLOAT_MIN - FLOAT_MAX)
// acquire -> zorgt ervoor dat het op de goede manier gecast wordt naar de 'echte' value
// convert -> cast het op de juiste manier, moet ook error checks uitvoeren
// printResult -> print het op de juiste manier
