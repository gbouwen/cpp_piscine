/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 15:27:19 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/14 15:28:43 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestform.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
	this->_name = "Robotomy request form";
	this->_signed = false;
	this->_rankToSign = 72;
	this->_rankToExecute = 45;
	this->_target = target;
}
