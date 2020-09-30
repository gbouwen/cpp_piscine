/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 17:44:54 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/30 10:33:57 by gbouwen       ########   odam.nl         */
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

Span::Span(unsigned int n) : _maxSize(n)
{
	return ;
}

Span::~Span(void)
{
	return ;
}

Span const	&Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_vector = rhs._vector;
		this->_maxSize = rhs._maxSize;
	}
	return (*this);
}

void	Span::addNumber(int n)
{
	if (this->_vector.size() >= this->_maxSize)
		throw(std::runtime_error("List is full"));
	this->_vector.push_back(n);
	return ;
}

int		Span::shortestSpan(void)
{
	int	shortest;

	if (this->_vector.empty() || this->_vector.size() == 1)
		throw (std::runtime_error("Could not find span"));
	std::sort(this->_vector.begin(), this->_vector.end());
	shortest = std::numeric_limits<int>::max();
	for (unsigned long i = 0; i < this->_vector.size() - 1; i++)
	{
		if ((this->_vector[i + 1] - this->_vector[i]) < shortest)
			shortest = this->_vector[i + 1] - this->_vector[i];
	}
	if (shortest == std::numeric_limits<int>::max())
		throw (std::runtime_error("Could not find span"));
	return (shortest);
}

int		Span::longestSpan(void)
{
	int	result;

	if (this->_vector.empty() || this->_vector.size() == 1)
		throw (std::runtime_error("Could not find span"));
	result =	*max_element(this->_vector.begin(), this->_vector.end()) -
				*min_element(this->_vector.begin(), this->_vector.end());
	return (result);
}
