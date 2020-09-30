/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 17:43:52 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/29 16:20:47 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	testSmall(void)
{
	Span	spOne = Span(5);

	std::cout << "---------------" << std::endl;
	std::cout << "Testing first: " << std::endl;
	spOne.addNumber(5);
	spOne.addNumber(3);
	spOne.addNumber(17);
	spOne.addNumber(9);
	spOne.addNumber(11);
	try
	{
		std::cout << spOne.shortestSpan() << std::endl;
		std::cout << spOne.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return ;
}

void	testLarge(void)
{
	srand(time(NULL));

	std::cout << "---------------" << std::endl;
	std::cout << "Testing second:" << std::endl;
	Span	spTwo = Span(10000);
	for (int i = 0; i < 10000; i++)
		spTwo.addNumber(rand());
	try
	{
		std::cout << spTwo.shortestSpan() << std::endl;
		std::cout << spTwo.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return ;
}

void	testEmpty(void)
{
	std::cout << "---------------" << std::endl;
	std::cout << "Testing empty: " << std::endl;

	Span	empty = Span(0);

	try
	{
		std::cout << empty.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return ;
}

void	testSizeOne(void)
{
	std::cout << "---------------" << std::endl;
	std::cout << "Testing one:   " << std::endl;
	Span	one = Span(1);

	one.addNumber(5);
	try
	{
		std::cout << one.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return ;
}

void	testFullVector(void)
{
	std::cout << "---------------" << std::endl;
	std::cout << "Testing full:  " << std::endl;
	Span	full(2);

	try
	{
		full.addNumber(1);
		full.addNumber(2);
		full.addNumber(3);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return ;
}

int	main(void)
{
	testSmall();
	testLarge();
	testEmpty();
	testSizeOne();
	testFullVector();
	return (0);
}
