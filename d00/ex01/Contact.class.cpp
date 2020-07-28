/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 13:23:40 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/07/28 14:46:14 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::get_firstName(void) const
{
	return (this->_firstName);
}

void		Contact::set_firstName(void)
{
	std::cout << "What is the contact's first name?" << std::endl;
	std::cin >> this->_firstName;
	std::cout << this->_firstName << std::endl;
	return ;
}
