/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 13:36:58 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/23 15:14:36 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	swap(T &value1, T &value2)
{
	T temp = value1;

	value1 = value2;
	value2 = temp;
	return ;
}

template <typename T>
T		min(T value1, T value2)
{
	return ((value1 < value2) ? value1 : value2);
}

template <typename T>
T		max(T value1, T value2)
{
	return ((value1 > value2) ? value1 : value2);
}

int	main(void)
{
	int	a = 2;
	int	b = 10;

	std::cout << "a before swap: " << a << std::endl;
	std::cout << "b before swap: " << b << std::endl;
	swap(a, b);
	std::cout << "Swapping..." << std::endl;
	std::cout << "a after swap: " << a << std::endl;
	std::cout << "b after swap: " << b << std::endl;
	std::cout << "---------------------------------" << std::endl;

	int	c = 5;
	int	d = 10;
	std::cout << "min of " << c << " and " << d << " is: " << min(c, d) << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "max of " << c << " and " << d << " is: " << max(c, d) << std::endl;
	return (0);
}
