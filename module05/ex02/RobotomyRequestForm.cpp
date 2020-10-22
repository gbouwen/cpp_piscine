/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 15:27:19 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/21 15:07:56 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
{
	Form::operator=(src);
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy request form", 72, 45, target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	Form::setSigned(rhs.getSigned());
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::checkRequirements(executor);
	int	randomNumber;

	randomNumber = rand() % 2;
	std::cout << "BZZZZZ... BZZZZZ... BZZZZZ..." << std::endl;
	if (randomNumber == 1)
		std::cout << this->getTarget() << " has been robotomized." << std::endl;
	else
		std::cout << "Failed to robotomize " << this->getTarget() << std::endl;
}
