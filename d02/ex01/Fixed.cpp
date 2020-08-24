/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 12:41:11 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/24 12:48:57 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.cpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
	return ;
}
