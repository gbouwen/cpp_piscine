/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 09:54:24 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/07/28 12:29:45 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	std::string	arg;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		arg = av[i];
		for (unsigned long x = 0; x < arg.length(); x++)
			arg[x] = toupper(arg[x]);
		std::cout << arg << " ";
	}
	std::cout << std::endl;
	return (0);
}
