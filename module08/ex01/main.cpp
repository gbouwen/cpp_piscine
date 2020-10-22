/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 17:43:52 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/02 14:30:16 by gbouwen       ########   odam.nl         */
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
	spOne.addNumber(0);
	spOne.addNumber(-2147483648);
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
	std::vector<int>	vector;

	std::cout << "---------------" << std::endl;
	std::cout << "Testing second:" << std::endl;
	Span	spTwo = Span(10000);
	for (int i = 0; i < 10000; i++)
		vector.push_back(rand());
	spTwo.addRange(vector.begin(), vector.end());
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

void	testLargeFull(void)
{
	srand(time(NULL));
	std::vector<int>	vector;

	std::cout << "---------------" << std::endl;
	std::cout << "Testing second:" << std::endl;
	Span	spTwo = Span(10000);
	for (int i = 0; i < 10000; i++)
		vector.push_back(rand());
	try
	{
		spTwo.addNumber(10);
		spTwo.addNumber(500);
		spTwo.addRange(vector.begin(), vector.end());
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
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
	testLargeFull();
	testEmpty();
	testSizeOne();
	testFullVector();
	return (0);
}
