/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 16:44:17 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/02 12:11:14 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

public:

	MutantStack(void)
	{
		return ;
	}

	MutantStack(MutantStack const &src)
	{
		*this = src;
		return ;
	}

	~MutantStack(void)
	{
		return ;
	}

	MutantStack	&operator=(MutantStack const &rhs)
	{
		if (this != &rhs)
			this->c = rhs.c;
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator	iterator;
	typename std::stack<T>::container_type::iterator			begin(void)
	{
		return (this->c.begin());
	}
	typename std::stack<T>::container_type::iterator			end(void)
	{
		return (this->c.end());
	}

	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
	typename std::stack<T>::container_type::const_iterator			begin(void) const
	{
		return (this->c.begin());
	}
	typename std::stack<T>::container_type::const_iterator			end(void) const
	{
		return (this->c.end());
	}

	typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;
	typename std::stack<T>::container_type::reverse_iterator		rbegin(void)
	{
		return (this->c.rbegin());
	}
	typename std::stack<T>::container_type::reverse_iterator		rend(void)
	{
		return (this->c.rend());
	}

	typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
	typename std::stack<T>::container_type::const_reverse_iterator	rbegin(void) const
	{
		return (this->c.rbegin());
	}
	typename std::stack<T>::container_type::const_reverse_iterator	rend(void) const
	{
		return (this->c.rend());
	}
};

#endif
