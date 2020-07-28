/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 11:33:10 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/07/28 14:52:37 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

void	add_contact(Contact *contact)
{
	contact->set_firstName();
}

int		main(void)
{
	Contact		contact[8];
	std::string	command;
	int			index;

	std::cout << "Valid commands are: ADD, SEARCH, and EXIT." << std::endl;
	index = 0;
	do
	{
		std::cin >> command;
		if (command.compare("ADD") == 0)
		{
			add_contact(&contact[0]);
			std::cout << ": " << contact[0].get_firstName() << std::endl;
			index++;
		}
		if (command.compare("SEARCH") == 0)
			std::cout << "ga searchen" << std::endl;
	}
	while (command.compare("EXIT") != 0);
	std::cout << "Bye!" << std::endl;
	return (0);
}
