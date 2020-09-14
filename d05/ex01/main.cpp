/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 14:19:09 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/14 14:38:39 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	bob("bob", 20);
	Form		form("form", 10, 5);
	Form		form2("form2", 25, 10);

	std::cout << form;
	bob.signForm(form);
	std::cout << form;

	std::cout << form2;
	bob.signForm(form2);
	std::cout << form2;

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
