/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 17:44:54 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/28 18:02:07 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void)
{
	return ;
}

Span::Span(Span const &src)
{
	*this = src;
	return ;
}

Span::Span(unsigned int n)
{
	//
	return ;
}

Span::~Span(void)
{
	return ;
}

Span const	&Span::operator=(Span const &rhs)
{
	//
	return (*this);
}

void	Span::addNumber(int n)
{
	//
	return ;
}

int		Span::shortestSpan(void) const
{
	//
}

int		Span::longestSpan(void) const
{
	//
}
