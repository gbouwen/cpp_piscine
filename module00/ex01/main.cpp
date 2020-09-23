/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 09:29:33 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/21 12:09:10 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void	searchAllContacts(Contact contacts[], int contacts_added)
{
	int			current_index;
	std::string	command;
	int			input_index;

	current_index = contacts_added - 1;
	if (contacts_added == 0)
	{
		std::cout << "Phonebook is empty, add a contact!" << std::endl;
		return ;
	}
	for (int i = 0; i < contacts_added; i++)
		contacts[i].searchContactShort();
	do
	{
		std::cout << "You can search for a specific entry." << std::endl;
		std::cout << "Search an index in range [0 - " << current_index << "]." << std::endl;
		std::cout << "Or use the BACK command to go back." << std::endl;
		std::cout << "> ";
		getline(std::cin, command);
		input_index = std::atoi(command.c_str());
		if ((input_index >= 0 && input_index <= current_index) && (command.length() == 1 && isdigit(command[0])))
			contacts[input_index].searchContactFull();
		else if (command.compare("BACK") != 0)
			std::cout << "INVALID INPUT." << std::endl;
	}
	while (command.compare("BACK") != 0);
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
		getline(std::cin, command);
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
		getline(std::cin, command);
		if (index == 8)
		{
			phonebookFull(contacts, index);
			return (0);
		}
		if (command.compare("ADD") == 0)
		{
			contacts[index].addContact(index);
			index++;
		}
		if (command.compare("SEARCH") == 0)
			searchAllContacts(contacts, index);
	}
	while (command.compare("EXIT") != 0);
	std::cout << "Bye!" << std::endl;
	return (0);
}
