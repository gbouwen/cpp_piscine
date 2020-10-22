/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 12:21:16 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/22 10:26:10 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bob("bob", 5);

		std::cout << bob;
		bob.incrementGrade();
		std::cout << bob;
		bob.incrementGrade();
		std::cout << bob;
		bob.incrementGrade();
		std::cout << bob;
		bob.incrementGrade();
		std::cout << bob;
		bob.incrementGrade();
		std::cout << bob;
	}
	catch (std::exception &exception)
	{
		std::cout << "Error: " << exception.what() << std::endl;
	}

	try
	{
		Bureaucrat	bill("bill", 500);
	}
	catch (std::exception &exception)
	{
		std::cout << "Error: " << exception.what() << std::endl;
	}
	return (0);
}
