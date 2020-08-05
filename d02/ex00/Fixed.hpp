/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 13:40:41 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/05 14:14:00 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{

public:

	Fixed(void);
	Fixed(const Fixed &src);
	~Fixed(void);

	Fixed	&operator=(const Fixed &src);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);

private:

	int					_value;
	const static int	_fractionalBits = 8;

};

#endif
