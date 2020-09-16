/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Conversion.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 14:44:55 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/16 15:26:44 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>

class Conversion
{

public:

	Conversion(void);
	Conversion(Conversion const &src);
	~Conversion(void);

	Conversion	&operator(Conversion const &rhs);

	void	acquire(void);
	void	convert(void);
	void	printResults(void) const;

private:

	char		_charResult;
	int			_intResult;
	float		_floatResult;
	double		_doubleResult;
	std::string	_type;
};

#endif
