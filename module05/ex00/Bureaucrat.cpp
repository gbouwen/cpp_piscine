/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 10:30:02 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/22 10:23:16 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(1)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException("Grade too high"));
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException("Grade too low"));
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name("default")
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
		this->_grade = rhs._grade;
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
	return ;
}

void			Bureaucrat::decrementGrade(void)
{
	if ((this->_grade + 1) > 150)
		throw (Bureaucrat::GradeTooLowException("Grade too low"));
	this->_grade++;
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string error)
{
	this->_errorMessage = error;
	return ;
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return (this->_errorMessage.c_str());
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string error)
{
	this->_errorMessage = error;
	return ;
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return (this->_errorMessage.c_str());
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src)
{
	std::cout << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return (o);
}
