/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 15:46:04 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/28 11:20:24 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

class Awesome
{

public:

	Awesome(void) : _n(42)
	{
		return;
	}

	int get(void) const
	{
		return this->_n;
	}

private:

	int _n;
};

std::ostream & operator<<(std::ostream &o, Awesome const & rhs)
{
	o << rhs.get();
	return (o);
}

template< typename T >
void print(T const &x)
{
	std::cout << x << std::endl;
	return;
}

int	main(void)
{
	Array<int>		first(5);
	Array<Awesome>	aweArray(10);
	Array<int>		empty;

	first[0] = 12;
	first[1] = 24;
	first[2] = 36;
	first[3] = 48;
	first[4] = 60;
	std::cout << "Printing int array: " << std::endl;
	for (unsigned int i = 0; i < first.size(); i++)
		std::cout << first[i] << std::endl;
	std::cout << "Printing awesome array: " << std::endl;
	for (unsigned int i = 0; i < aweArray.size(); i++)
		std::cout << aweArray[i] << std::endl;
	std::cout << "Try catch to check index out of limit" << std::endl;
	try
	{
		first[20] = 10;
		std::cout << "That worked";
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	Array<int>		copy(first);

	std::cout << "Printing copied array: " << std::endl;
	for (unsigned int i = 0; i < first.size(); i++)
		std::cout << copy[i] << std::endl;

	Array<Awesome>	assig = aweArray;

	std::cout << "Printing assignation overloaded array: " << std::endl;
	for (unsigned int i = 0; i < assig.size(); i++)
		std::cout << assig[i] << std::endl;
	return (0);
}
