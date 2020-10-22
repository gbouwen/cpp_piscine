/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 11:12:33 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/21 15:12:14 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	ShrubberyCreationForm	shrubForm("home");
	ShrubberyCreationForm	copy(shrubForm);
	RobotomyRequestForm		robForm("bob");
	PresidentialPardonForm	presForm("king");
	Bureaucrat				ben("ben", 1);

	std::cout << ben;
	std::cout << shrubForm;
	std::cout << copy;
	std::cout << robForm;
	std::cout << presForm;
	std::cout << "--------------------------------" << std::endl;
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

	ShrubberyCreationForm equals = shrubForm;

	std::cout << shrubForm;
	std::cout << equals;
	std::cout << robForm;
	std::cout << presForm;
	std::cout << "---------------------------" << std::endl;
	ben.executeForm(shrubForm);
	std::cout << "--------------------------" << std::endl;
	ben.executeForm(robForm);
	std::cout << "-------------------------" << std::endl;
	ben.executeForm(presForm);
	std::cout << "--------------------" << std::endl;

	Bureaucrat	ap("ap", 150);
	std::cout << ap;

	ShrubberyCreationForm	shrubForm2("away");
	std::cout << shrubForm2;
	ap.signForm(shrubForm2);
	ap.executeForm(shrubForm2);
	ben.signForm(shrubForm2);
	ap.executeForm(shrubForm2);
	return (0);
}
