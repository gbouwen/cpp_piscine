/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 17:44:54 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/29 14:52:24 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	return ;
}

Span::Span(Span const &src)
{
	*this = src;
	return ;
}

Span::Span(unsigned int n) : _size(n)
{
	return ;
}

Span::~Span(void)
{
	return ;
}

//Span const	&Span::operator=(Span const &rhs)
//{
	////
	//return (*this);
//}

void	Span::addNumber(int n)
{
	if (this->_vector.size() > this->_size)
		throw(std::logic_error("List is full"));
	this->_vector.push_back(n);
	return ;
}

//int		Span::shortestSpan(void)
//{
	////
//}

int		Span::longestSpan(void)
{
	int	result;

	std::sort(this->_vector.begin(), this->_vector.end());
	result = this->_vector[this->_vector.size() - 1] - this->_vector[0];
	return (result);
}
