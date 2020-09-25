/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 13:36:58 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/25 11:34:17 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class
Awesome
{

public:

	Awesome( int n ) : _n( n ) { return ; }
	int getN() const { return (this->_n); }

	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

private:

	int _n;
};


template <typename T>
void	swap(T &value1, T &value2)
{
	T temp = value1;

	value1 = value2;
	value2 = temp;
	return ;
}

template <typename T>
T		min(T const &value1, T const &value2)
{
	return ((value1 < value2) ? value1 : value2);
}

template <typename T>
T		max(T const &value1, T const &value2)
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
	std::cout << "---------------------------------" << std::endl;

	Awesome e(7);
	Awesome f(11);

	std::cout << "e before swap: " << e.getN() << std::endl;
	std::cout << "f before swap: " << f.getN() << std::endl;
	swap(e, f);
	std::cout << "Swapping..." << std::endl;
	std::cout << "e after swap: " << e.getN() << std::endl;
	std::cout << "f after swap: " << f.getN() << std::endl;
	std::cout << "---------------------------------" << std::endl;

	std::cout << "min of " << e.getN() << " and " << f.getN() << " is: ";
	Awesome result = min(e, f);
	std::cout << result.getN() << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "max of " << e.getN() << " and " << f.getN() << " is: ";
	result = max(e, f);
	std::cout << result.getN() << std::endl;
	return (0);
}
