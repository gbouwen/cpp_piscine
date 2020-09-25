/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 15:33:32 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/23 15:52:16 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>

template <typename T>
class Array
{

public:

	Array(void) : _array(new T[0]), _size(0)
	{
		return ;
	}

	Array(unsigned int n) : _array(new T[n]), _size(n)
	{
		return ;
	}

	Array(Array const &src)
	{
		this->_size = src._size;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = src._array[i];
		return ;
	}

	~Array(void)
	{
		delete [] this->_array;
	}

	Array	&operator=(Array const &rhs)
	{
		if (this->_array)
			delete [] this->_array;
		this->_size = rhs._size;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = rhs._array[i];
		return (*this);
	}

	class	AccessOutOfLimitException : public std::exception
	{

	public:

		AccessOutOfLimitException(std::string error)
		{
			this->_errorMessage = error;
			return ;
		}

		const char	*what(void) const throw()
		{
			return (this->_errorMessage.c_str());
		}

		~AccessOutOfLimitException(void) throw()
		{
			return ;
		}

	private:

		std::string	_errorMessage;
	};

	T		&operator[](unsigned int n) const
	{
		if (n >= this->_size)
			throw (Array::AccessOutOfLimitException("Accessing array member out of limit"));
		return (this->_array[n]);
	}

	unsigned int	size(void) const
	{
		return (this->_size);
	}

private:

	T				*_array;
	unsigned int	_size;
};
