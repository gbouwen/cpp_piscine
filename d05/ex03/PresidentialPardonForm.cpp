/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 15:30:19 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/15 11:09:51 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential pardon form", 145, 137, target)
{
	return ;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	return ;
}
