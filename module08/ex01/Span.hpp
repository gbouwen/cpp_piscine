/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 17:45:01 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/29 15:18:26 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <limits>

class Span
{

public:

	Span(Span const &src);
	Span(unsigned int n);
	~Span(void);

	Span const	&operator=(Span const &rhs);

	void	addNumber(int n);
	int		shortestSpan(void);
	int		longestSpan(void);

private:

	Span(void);

	std::vector<int>	_vector;
	unsigned int		_size;
};

#endif
