/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 12:41:11 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/24 10:54:07 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

Fixed::Fixed(int const src)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = src * (1 << _fractionalBits);
	return ;
}

Fixed::Fixed(float const src)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(src * (1 << _fractionalBits));
	return ;

}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
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

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / (1 << this->_fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (this->_value / (1 << this->_fractionalBits));
}

std::ostream	&operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return (o);
}
