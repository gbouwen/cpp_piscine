/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 12:24:44 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/21 15:52:06 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	for (int i = 0; i < 3; i++)
		this->_allFormTypes[i] = NULL;
	return ;
}

Intern::Intern(Intern const &src)
{
	*this = src;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 3; i++)
			this->_allFormTypes[i] = rhs._allFormTypes[i];
	}
	return (*this);
}

Form	*Intern::makeForm(std::string formName, std::string target)
{
	Form	*newForm = NULL;
	int		formNumber = -1;

	this->_allFormTypes[0] = new ShrubberyCreationForm(target);
	this->_allFormTypes[1] = new RobotomyRequestForm(target);
	this->_allFormTypes[2] = new PresidentialPardonForm(target);
	for (int i = 0; i < 3; i++)
	{
		if (formName == this->_allFormTypes[i]->getName())
		{
			newForm = this->_allFormTypes[i];
			formNumber = i;
		}
	}
	if (newForm)
		std::cout << "Intern creates " << newForm->getName() << std::endl;
	else
		std::cout << "Intern failed to create " << formName << std::endl;
	for (int i = 0; i < 3; i++)
	{
		if (i != formNumber)
			delete (this->_allFormTypes[i]);
	}
	return (newForm);
}
