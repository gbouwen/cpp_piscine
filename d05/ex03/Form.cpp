/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 13:36:47 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/15 11:35:45 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
{
	return ;
}

Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute, std::string target) : _signed(false)
{
	this->_name = name;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw (Form::GradeTooHighException("Grade too high"));
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw (Form::GradeTooLowException("Grade too low"));
	this->_gradeToSign = gradeToSign;
	this->_gradeToExecute = gradeToExecute;
	this->_target = target;
}

Form::Form(Form const &src)
{
	*this = src;
	return ;
}

Form::~Form(void)
{
	return ;
}

Form	&Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_signed = rhs._signed;
		this->_gradeToSign = rhs._gradeToSign;
		this->_gradeToExecute = rhs._gradeToExecute;
	}
	return (*this);
}

std::string		Form::getName(void) const
{
	return (this->_name);
}

bool			Form::getSigned(void) const
{
	return	(this->_signed);
}

unsigned int	Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

unsigned int	Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

std::string		Form::getTarget(void) const
{
	return (this->_target);
}

void			Form::beSigned(Bureaucrat const &src)
{
	if (this->_gradeToSign < src.getGrade())
		throw (Form::GradeTooLowException("Grade too low"));
	if (this->_signed)
		throw (Form::FormAlreadySignedException("Form already signed"));
	this->_signed = true;
	return ;
}

void			Form::execute(Bureaucrat const &executor) const
{
	if (!this->_signed)
		throw (Form::FormNotSignedException("Form not signed"));
	if (executor.getGrade() > this->_gradeToExecute)
		throw (Form::GradeTooLowException("Grade too low"));
}

Form::GradeTooHighException::GradeTooHighException(std::string error)
{
	this->_errorMessage = error;
	return ;
}

const char	*Form::GradeTooHighException::what(void) const noexcept
{
	return (this->_errorMessage.c_str());
}

Form::GradeTooLowException::GradeTooLowException(std::string error)
{
	this->_errorMessage = error;
	return ;
}

const char	*Form::GradeTooLowException::what(void) const noexcept
{
	return (this->_errorMessage.c_str());
}

Form::FormAlreadySignedException::FormAlreadySignedException(std::string error)
{
	this->_errorMessage = error;
	return ;
}

const char	*Form::FormAlreadySignedException::what(void) const noexcept
{
	return (this->_errorMessage.c_str());
}

Form::FormNotSignedException::FormNotSignedException(std::string error)
{
	this->_errorMessage = error;
	return ;
}

const char	*Form::FormNotSignedException::what(void) const noexcept
{
	return (this->_errorMessage.c_str());
}

std::ostream	&operator<<(std::ostream &o, Form const &src)
{
	std::cout << src.getName();
	if (src.getSigned())
		std::cout << " is signed - ";
	else
		std::cout << " is not signed - ";
	std::cout << "grade required to sign: " << src.getGradeToSign() << " - ";
	std::cout << "grade required to execute: " << src.getGradeToExecute() << std::endl;
	return (o);
}
