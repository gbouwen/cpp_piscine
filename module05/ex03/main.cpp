/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 14:31:46 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/15 14:42:28 by gbouwen       ########   odam.nl         */
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
		std::cout << "error: could not create form" << std::endl;
	form = randomDude.makeForm("Presidential pardon form", "bender");
	bob.signForm(*form);
	bob.executeForm(*form);
	form->execute(bob);
	delete (form);
	return (0);
}
