/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 14:31:46 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/21 15:57:38 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Intern		randomDude;
	Bureaucrat	bob("bob", 1);
	Form		*form;

	form = randomDude.makeForm("eiowjfiowe", "bender");
	if (!form)
		std::cout << "Error: could not create form" << std::endl;
	std::cout << "---------------------------" << std::endl;
	form = randomDude.makeForm("Presidential pardon form", "bender");
	bob.signForm(*form);
	bob.executeForm(*form);
	delete (form);
	std::cout << "------------------------------------" << std::endl;
	form = randomDude.makeForm("Shrubbery creation form", "neighbour");
	bob.signForm(*form);
	bob.executeForm(*form);
	delete (form);
	std::cout << "------------------------------------" << std::endl;
	form = randomDude.makeForm("Robotomy request form", "me");
	bob.signForm(*form);
	bob.executeForm(*form);
	delete (form);
	return (0);
}
