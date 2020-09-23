/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:30:16 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/22 18:00:44 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base	*generate(void)
{
	unsigned int randomNumber = rand() % 3;

	if (randomNumber == 0)
		return (new A);
	if (randomNumber == 1)
		return (new B);
	return (new C);
}

void	identify_from_pointer(Base *p)
{
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "A" << std::endl;
	if (b)
		std::cout << "B" << std::endl;
	if (c)
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	try
	{
		A	a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception badCast)
	{

	}
	try
	{
		B	b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception badCast)
	{

	}
	try
	{
		C	c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception badCast)
	{

	}

}

int	main(void)
{
	Base *base;

	srand(time(NULL));
	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete (base);
	return (0);
}
