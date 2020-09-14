/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 15:30:19 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/14 15:31:18 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
	this->_name = "Presidential pardon form";
	this->_signed = false;
	this->_rankToSign = 25;
	this->_rankToExecute = 5;
	this->_target = target;
}
