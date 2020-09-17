/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convertor.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 11:59:24 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 17:36:26 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

# include <string>
# include <iostream>
# include <cctype>
# include <limits>
# include <cstdlib>

typedef struct	s_data
{
	char	charResult;
	int		intResult;
	float	floatResult;
	double	doubleResult;
}				t_data;

int		detectType(std::string input);
void	setType(std::string input, int type, t_data *data);
void	castTypes(int type, t_data *data);
void	printEverything(t_data data);

# define CHAR	1
# define INT 	2
# define FLOAT	3
# define DOUBLE 4

#endif
