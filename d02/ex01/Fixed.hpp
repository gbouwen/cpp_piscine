/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 12:33:01 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/24 12:40:54 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

public:

	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);

	Fixed &operator=(Fixed const &src);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int					_value;
	static int const	_fractionalBits = 8;
};

#endif
