/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convertor.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 11:59:24 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 13:52:15 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

# include <string>
# include <iostream>
# include <cctype>

void	detectChar(std::string input, char *charResult);
int		detectInt(std::string input);
float	detectFloat(std::string input);
double	detectDouble(std::string input);

void	castTypes(char *charResult, int *intResult, float *floatResult, double *doubleResult);
void	printEverything(char charResult, int intResult, float floatResult, double doubleResult);

#endif
