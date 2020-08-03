/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 09:29:33 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/03 12:02:24 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void	searchAllContacts(Contact contacts[], int index)
{
	std::string	input;
	int			input_index;

	for (int i = 0; i < index; i++)
		contacts[i].searchContactShort();
	if (index == 0)
	{
		std::cout << "Phonebook is empty, add a contact!" << std::endl;
		return ;
	}
	do
	{
		std::cout << "You can search for a specific entry." << std::endl;
		std::cout << "Search an index in range [1 - " << index << "]." << std::endl;
		std::cout << "Or use the BACK command to go back." << std::endl;
		std::cout << "> ";
		// USE std::getline INSTEAD OF std::cin !
		std::cin >> input;
		input_index = std::atoi(input.c_str());
		if (input_index >= 1 && input_index <= index)
			contacts[input_index - 1].searchContactFull();
		if ((input_index < 1 || input_index > index) && input.compare("BACK") != 0)
			std::cout << "INVALID INPUT." << std::endl;
	}
	while (input.compare("BACK") != 0);
}

void	phonebookFull(Contact contacts[], int index)
{
	std::string	command;

	std::cout << "PHONEBOOK IS FULL." << std::endl;
	std::cout << "ADD command is disabled." << std::endl;
	do
	{
		std::cout << "Valid commands are: SEARCH, and EXIT." << std::endl;
		std::cout << "> ";
		// USE std::getline INSTEAD OF std::cin !
		std::cin >> command;
		if (command.compare("SEARCH") == 0)
			searchAllContacts(contacts, index);
	}
	while (command.compare("EXIT") != 0);
	std::cout << "Bye!" << std::endl;
}

int		main(void)
{
	Contact		contacts[8];
	int			index;
	std::string	command;

	std::cout << "Welcome to this crappy awesome phonebook." << std::endl;
	index = 0;
	do
	{
		std::cout << "Valid commands are: ADD, SEARCH, and EXIT." << std::endl;
		std::cout << "> ";
		// USE std::getline INSTEAD OF std::cin !
		std::cin >> command;
		if (index == 8)
		{
			phonebookFull(contacts, index);
			return (0);
		}
		if (command.compare("ADD") == 0)
		{
			contacts[index].addContact(index + 1);
			index++;
		}
		if (command.compare("SEARCH") == 0)
			searchAllContacts(contacts, index);
	}
	while (command.compare("EXIT") != 0);
	std::cout << "Bye!" << std::endl;
	return (0);
}
