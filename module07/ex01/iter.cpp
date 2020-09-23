/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 15:17:32 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/23 15:32:16 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	iter(T *array, size_t length, void (*func)(T))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
	return ;
}

template <typename T>
void	print(T element)
{
	std::cout << element << std::endl;
	return ;
}

int	main(void)
{
	int			intArray[5] = { 10, 20, 30, 40, 50 };
	std::string	strArray[8] = { "s1", "s2", "s3", "s4", "s5", "s6", "s7", "s8" };

	std::cout << "--- Printing intArray ---" << std::endl;
	iter(intArray, sizeof(intArray) / sizeof(intArray[0]) , print);
	std::cout << "-------------------------" << std::endl;
	std::cout << "--- Printing strArray ---" << std::endl;
	iter(strArray, sizeof(strArray) / sizeof(strArray[0]) , print);
	std::cout << "-------------------------" << std::endl;
	return (0);
}
