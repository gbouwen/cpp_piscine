/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 14:19:09 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/21 14:49:45 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	bob("bob", 20);
	Form		form("form", 10, 5);
	Form		form2("form2", 25, 10);
	Form		copy(form);

	std::cout << "-------------------------------" << std::endl;
	std::cout << form;
	std::cout << copy;
	std::cout << bob;
	bob.signForm(form);
	std::cout << form;
	std::cout << "-------------------------------" << std::endl;

	std::cout << "-------------------------------" << std::endl;
	std::cout << form2;
	std::cout << bob;
	bob.signForm(form2);
	Form	copy2(form2);
	std::cout << form2;
	std::cout << copy2;
	std::cout << "-------------------------------" << std::endl;

	std::cout << "-------------------------------" << std::endl;
	std::cout << form2;
	std::cout << bob;
	bob.signForm(form2);
	std::cout << "-------------------------------" << std::endl;
	try
	{
		Form	wrong("wrong", 0, 20);
	}
	catch (std::exception &exception)
	{
		std::cout << "Error: " << exception.what() << std::endl;
	}
	try
	{
		Form	wrong("wrong", 1, 500);
	}
	catch (std::exception &exception)
	{
		std::cout << "Error: " << exception.what() << std::endl;
	}
	return (0);
}
