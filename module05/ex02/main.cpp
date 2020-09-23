/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 11:12:33 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/15 11:32:06 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	ShrubberyCreationForm	shrubForm("home");
	RobotomyRequestForm		robForm("bob");
	PresidentialPardonForm	presForm("king");
	Bureaucrat				ben("ben", 1);

	try
	{
		shrubForm.execute(ben);
	}
	catch (std::exception &exception)
	{
		std::cout << "Error: " << exception.what() << std::endl;
	}
	ben.signForm(shrubForm);
	ben.signForm(shrubForm);
	ben.signForm(robForm);
	ben.signForm(presForm);
	ben.executeForm(shrubForm);
	shrubForm.execute(ben);
	ben.executeForm(robForm);
	robForm.execute(ben);
	ben.executeForm(presForm);
	presForm.execute(ben);
	std::cout << "--------------------" << std::endl;
	Bureaucrat	ap("ap", 150);
	ShrubberyCreationForm	shrubForm2("away");
	ap.signForm(shrubForm2);
	ap.executeForm(shrubForm2);
	ben.signForm(shrubForm2);
	ap.executeForm(shrubForm2);
	return (0);
}
