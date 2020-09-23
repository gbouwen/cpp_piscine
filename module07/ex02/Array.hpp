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

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{

public:

	Array(void);
	Array(unsigned int n);
	Array(Array const &src);

	Array	&operator=(Array const &rhs);

	unsigned int	size(void) const;

private:

	T	*array;
};

#endif
