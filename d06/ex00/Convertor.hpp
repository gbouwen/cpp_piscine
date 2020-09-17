/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convertor.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 14:44:55 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 11:01:28 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <cstdlib>

class Convertor
{

public:

	Convertor(void);
	Convertor(Convertor const &src);
	~Convertor(void);

	Convertor	&operator=(Convertor const &rhs);

	void	acquire(std::string input);
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
