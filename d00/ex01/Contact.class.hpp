/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 09:29:21 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/07/29 13:38:10 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>

class Contact
{

public:

	Contact(void);
	~Contact(void);

	void	addContact(int index);
	void	searchContactShort(void) const;
	void	printInfo(std::string str) const;
	void	searchContactFull(void) const;

private:

	std::string	_firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _login;
	std::string	_postalAddress;
	std::string	_emailAddress;
	std::string	_phoneNumber;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
	int			_index;
};

#endif
