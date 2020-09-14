/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 10:30:02 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/14 12:28:30 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException("Grade too high"));
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException("Grade too low"));
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_grade = rhs._grade;
	}
	return (*this);
}

std::string		Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void			Bureaucrat::incrementGrade(void)
{
	if ((this->_grade - 1) < 1)
		throw (Bureaucrat::GradeTooHighException("Grade too high"));
	this->_grade--;
}

void			Bureaucrat::decrementGrade(void)
{
	if ((this->_grade + 1) > 150)
		throw (Bureaucrat::GradeTooLowException("Grade too low"));
	this->_grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string error)
{
	this->_errorMessage = error;
	return ;
}

const char	*Bureaucrat::GradeTooHighException::what(void) const noexcept
{
	return (this->_errorMessage.c_str());
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string error)
{
	this->_errorMessage = error;
	return ;
}

const char	*Bureaucrat::GradeTooLowException::what(void) const noexcept
{
	return (this->_errorMessage.c_str());
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src)
{
	std::cout << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return (o);
}
