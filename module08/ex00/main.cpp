/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 17:08:39 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/29 10:23:37 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int	main(void)
{
	std::list<int>					list;
	std::list<int>::const_iterator	list_iterator;

	std::cout << "Testing list: " << std::endl;
	for (int i = 0; i < 10; i++)
		list.push_back(i);
	try
	{
		list_iterator = easyfind(list, 5);
		std::cout << "Found the value: " << *list_iterator << std::endl;
		list_iterator = easyfind(list, 500);
		std::cout << "Found the value: " << *list_iterator << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::vector<int>					vector;
	std::vector<int>::const_iterator	vector_iterator;

	std::cout << "Testing vector: " << std::endl;
	for (int i = 0; i < 10; i++)
		vector.push_back(i);
	try
	{
		vector_iterator = easyfind(vector, 5);
		std::cout << "Found the value: " << *vector_iterator << std::endl;
		vector_iterator = easyfind(vector, 500);
		std::cout << "Found the value: " << *vector_iterator << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
