/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 11:16:55 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/16 15:26:42 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Need one argument for this program to work" << std::endl;
		return (-1);
	}
	double	a;
	int		b;

	a = 2000000000;
	b = 2000000000;
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << av[1] << std::endl;
	return (0);
}

// haal getal uit av[1] als double
// check in welke range het getal valt (0 - 128), (INT_MIN - INT_MAX), (FLOAT_MIN - FLOAT_MAX)
// acquire -> zorgt ervoor dat het op de goede manier gecast wordt naar de 'echte' value
// convert -> cast het op de juiste manier, moet ook error checks uitvoeren
// printResult -> print het op de juiste manier
