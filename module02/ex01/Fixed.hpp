/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 12:33:01 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/24 14:20:12 by gbouwen       ########   odam.nl         */
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
	Fixed(int const src);
	Fixed(float const src);
	~Fixed(void);

	Fixed &operator=(Fixed const &rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					_value;
	static int const	_fractionalBits = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &src);

#endif
