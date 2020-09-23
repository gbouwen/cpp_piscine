/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 15:27:19 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/15 11:10:53 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy request form", 72, 45, target)
{
	return ;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int	randomNumber;

	Form::execute(executor);
	randomNumber = rand() % 2;
	std::cout << "BZZZZZ... BZZZZZ... BZZZZZ..." << std::endl;
	if (randomNumber == 1)
		std::cout << this->getTarget() << " has been robotomized." << std::endl;
	else
		std::cout << "Failed to robotomize " << this->getTarget() << std::endl;
}
