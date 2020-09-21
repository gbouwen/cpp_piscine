/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:30:16 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/21 17:51:55 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base	*generate(void)
{
	unsigned int randomNumber = rand() % 3;

	if (randomNumber == 0)
		return (new A);
	if (randomNumber == 1)
		return (new B);
	return (new C);
}

// use dynamic cast to check the type
// catch the exceptions in main

//void	identify_from_pointer(Base *p)
//{

//}

//void	identify_from_reference(Base &p)
//{

//}

int	main(void)
{
	Base *base = new Base;

	base = generate();
	return (0);
}
