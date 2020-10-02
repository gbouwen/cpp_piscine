/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 17:45:01 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/02 12:45:07 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <limits>
# include <iterator>

class Span
{

public:

	Span(Span const &src);
	Span(unsigned int n);
	~Span(void);

	Span const	&operator=(Span const &rhs);

	template	<typename Iterator>
	void	addRange(Iterator begin, Iterator end)
	{
		if (this->_vector.size() + distance(begin, end) > this->_maxSize)
			throw (std::runtime_error("Maximum size of vector exceeded if this range of iterators would be added"));
		this->_vector.insert(this->_vector.end(), begin, end);
		return ;
	}

	void	addNumber(int n);
	int		shortestSpan(void);
	int		longestSpan(void) const;

private:

	Span(void);

	std::vector<int>	_vector;
	unsigned int		_maxSize;
};

#endif
