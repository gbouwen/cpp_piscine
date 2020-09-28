/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 17:09:02 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/28 17:42:47 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
typename T::const_iterator	easyfind(T &container, int value)
{
	typename T::const_iterator	cit;

	cit = std::find(container.begin(), container.end(), value);
	return (cit);
}

#endif
