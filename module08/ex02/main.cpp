/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 16:43:44 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/29 17:28:42 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	MutantStack	m;

	m.push(5);
	std::cout << m.top() << std::endl;
	return (0);
}
