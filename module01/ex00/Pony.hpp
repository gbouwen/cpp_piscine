/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:10:38 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/03 13:02:30 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{

public:

	Pony(std::string name, std::string color, unsigned int age);
	~Pony(void);

	void	jump(void) const;
	void	eat(void) const;
	void	sleep(void) const;
	void	getName(void) const;
	void	getColor(void) const;
	void	getAge(void) const;
	void	getHeight(void) const;

private:

	std::string		_name;
	std::string 	_color;
	unsigned int	_age;
};

#endif
