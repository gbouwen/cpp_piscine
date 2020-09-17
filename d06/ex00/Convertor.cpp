/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convertor.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 14:54:20 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 11:05:39 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

Convertor::Convertor(void) : _charResult(0), _intResult(0), _floatResult(0), _doubleResult(0), _type("default")
{
	return ;
}

Convertor::Convertor(Convertor const &src)
{
	*this = src;
	return ;
}

Convertor::~Convertor(void)
{
	return ;
}

Convertor	&Convertor::operator=(Convertor const &rhs)
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

void	Convertor::acquire(std::string input)
{
	if (input.length() == 1)
	{
		if (isdigit(input[0]))
			this->_intResult = atoi(input.c_str());
		else if (input[0] >= 30 && input[0] <= 126)
			this->_charResult = input[0];
	}
	return ;
}

void	Convertor::convert(void)
{
	return ;
}

void	Convertor::printResults(void) const
{
	std::cout << "char: ";
	// if (conversion makes sense)
		std::cout << this->_charResult << std::endl;
	// else
		// std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	// if (conversion makes sense)
		std::cout << this->_intResult << std::endl;
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
