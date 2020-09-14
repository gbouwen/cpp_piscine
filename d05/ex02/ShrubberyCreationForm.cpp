/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 15:21:55 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/14 15:24:19 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	this->_name = "Shrubbery creation form";
	this->_signed = false;
	this->_gradeToSign = 145;
	this->_gradeToExecute = 137;
	this->_target = target;
}
