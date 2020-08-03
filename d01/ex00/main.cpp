/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:11:26 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/03 17:19:00 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony	heap = Pony("Heap", "black", 10);

	heap.jump();
	heap.eat();
	heap.sleep();
	heap.getName();
	heap.getColor();
	heap.getAge();
}

void	ponyOnTheHeap()
{
	Pony	*stack = new Pony("Stack", "white", 5);

	stack->jump();
	stack->eat();
	stack->sleep();
	stack->getName();
	stack->getColor();
	stack->getAge();
	delete stack;
}

int	main(void)
{
	std::cout << "------------------" << std::endl;
	std::cout << "- STARTING WITH STACK" << std::endl;
	ponyOnTheStack();
	std::cout << "- STACK IS DONE" << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << "- STARTING WITH HEAP" << std::endl;
	ponyOnTheHeap();
	std::cout << "- HEAP IS DONE" << std::endl;
	return (0);
}
