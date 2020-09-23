/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 15:17:32 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/23 18:17:29 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//class Awesome
//{

//public:

	//Awesome( void ) : _n( 42 ) { return; }

	//int get( void ) const { return this->_n; }

//private:

	//int _n;
//};

//std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

//template< typename T >
//void print( T const & x ) { std::cout << x << std::endl; return; }

template <typename T>
void	iter(T *array, size_t length, void (*func)(T const &t))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
	return ;
}

template <typename T>
void	printT(T element)
{
	std::cout << element << std::endl;
	return ;
}

int	main(void)
{
	int			intArray[5] = { 10, 20, 30, 40, 50 };
	std::string	strArray[8] = { "s1", "s2", "s3", "s4", "s5", "s6", "s7", "s8" };

	std::cout << "--- Printing intArray ---" << std::endl;
	iter(intArray, sizeof(intArray) / sizeof(intArray[0]) , printT);
	std::cout << "-------------------------" << std::endl;
	std::cout << "--- Printing strArray ---" << std::endl;
	iter(strArray, sizeof(strArray) / sizeof(strArray[0]) , printT);
	std::cout << "-------------------------" << std::endl;
   /* std::cout << "--- Printing aweArray ---" << std::endl;*/
	//Awesome	aweArray[5];

	/*iter(aweArray, sizeof(aweArray) / sizeof(aweArray[0]), print);*/
	return (0);
}
