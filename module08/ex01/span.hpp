/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 17:45:01 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/28 18:01:01 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{

public:

	Span(Span const &src);
	Span(unsigned int n);
	~Span(void);

	Span const	&operator=(Span const &rhs);

	class SpanIsFullException : public std::exception
	{

	public:

		SpanIsFullException(std::string error);
		{
			this->_errorMessage = error;
			return ;
		}

		const char	*what(void) const throw()
		{
			return (this->_errorMessage);
		}

		~SpanIsFullException(void) throw()
		{
			return ;
		}

	private:

			std::string	_errorMessage;
	};

	void	addNumber(int n);
	int		shortestSpan(void) const;
	int		longestSpan(void) const;

private:

	Span(void);

}

#endif
