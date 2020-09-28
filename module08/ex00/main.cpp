/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 17:08:39 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/28 17:42:50 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>

int	main(void)
{
	std::list<int>					list;
	std::list<int>::const_iterator	cit;

	for (int i = 0; i < 10; i++)
		list.push_back(i);
	cit = easyfind(list, 5);
	if (cit == list.end())
		std::cout << "Could not find element" << std::endl;
	else
		std::cout << "Found the value: " << *cit << std::endl;

	return (0);
}
