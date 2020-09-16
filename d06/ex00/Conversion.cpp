/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Conversion.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 14:54:20 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/16 15:26:20 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(void) : _charResult(0), _intResult(0), _floatResult(0), _doubleResult(0), _type(NULL)
{
	return ;
}

Conversion::Conversion(Conversion const &src)
{
	*this = src;
	return ;
}

Conversion::~Conversion(void)
{
	return ;
}

Conversion	&Conversion::operator=(Conversion const &rhs)
{
	if (this != &rhs)
	{
		this->_charResult = rhs._charResult;
		this->_intResult = rhs._intResult;
		this->_floatResult = rhs._floatResult;
		this->_doubleResult = rhs._doubleResult;
		this->_type = rhs._type;
	}
	return (*this);
}

void	Conversion::acquire(void)
{

}

void	Conversion::convert(void)
{

}

void	Conversion::printResults(void) const
{
	std::cout << "char: ";
	// if (conversion makes sense)
		// std::cout << this->_charResult << std::endl;
	// else
		// std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	// if (conversion makes sense)
		// std::cout << this->_intResult << std::endl;
	// else
		// std::cout << "impossible" << std::endl;
	std::cout << "float: ";
	// if (conversion makes sense)
		// std::cout << this->_floatResult << std::endl;
	// else
		// std::cout << "impossible" << std::endl;
	std::cout << "double: ";
	// if (conversion makes sense)
		// std::cout << this->_doubleResult << std::endl;
	// else
		// std::cout << "impossible" << std::endl;
	return ;
}
