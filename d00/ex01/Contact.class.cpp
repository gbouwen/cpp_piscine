/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 09:29:15 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/05 11:14:12 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void		Contact::addContact(int index)
{
	this->_index = index;
	std::cout << "Please fill in the following information: " << std::endl;
	std::cout << "- First name: ";
	getline(std::cin, this->_firstName);
	std::cout << "- Last name: ";
	getline(std::cin, this->_lastName);
	std::cout << "- Nickname: ";
	getline(std::cin, this->_nickName);
	std::cout << "- Login: ";
	getline(std::cin, this->_login);
	std::cout << "- Postal address: ";
	getline(std::cin, this->_postalAddress);
	std::cout << "- Email address: ";
	getline(std::cin, this->_emailAddress);
	std::cout << "- Phone number: ";
	getline(std::cin, this->_phoneNumber);
	std::cout << "- Birthday date: ";
	getline(std::cin, this->_birthdayDate);
	std::cout << "- Favorite meal: ";
	getline(std::cin, this->_favoriteMeal);
	std::cout << "- Underwear color: ";
	getline(std::cin, this->_underwearColor);
	std::cout << "- Darkest secret: ";
	getline(std::cin, this->_darkestSecret);
	std::cout << "Contact added successfully!" << std::endl;
}

void	Contact::printInfo(std::string str) const
{
	std::cout << std::setw(10);
	if (str.length() <= 10)
		std::cout << str << "|";
	else
		std::cout << str.substr(0, 9) + "." << "|";
}

void	Contact::searchContactShort(void) const
{
	std::cout << std::setw(10);
	std::cout << this->_index << "|";
	printInfo(this->_firstName);
	printInfo(this->_lastName);
	printInfo(this->_nickName);
	std::cout << std::endl;
}

void	Contact::searchContactFull(void) const
{
	std::cout << "- Index: " << this->_index << std::endl;
	std::cout << "- First name: " << this->_firstName << std::endl;
	std::cout << "- Last name: " << this->_lastName << std::endl;
	std::cout << "- Nickname: " << this->_nickName << std::endl;
	std::cout << "- Login: " << this->_login << std::endl;
	std::cout << "- Postal address: " << this->_postalAddress << std::endl;
	std::cout << "- Email address: " << this->_emailAddress << std::endl;
	std::cout << "- Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "- Birthday date: " << this->_birthdayDate << std::endl;
	std::cout << "- Favorite meal: " << this->_favoriteMeal << std::endl;
	std::cout << "- Underwear color: " << this->_underwearColor << std::endl;
	std::cout << "- Darkest secret: " << this->_darkestSecret << std::endl;
}
