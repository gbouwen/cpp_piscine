/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convertor.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 11:59:24 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 16:49:00 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

# include <string>
# include <iostream>
# include <cctype>
# include <limits>
# include <cstdlib>

bool	detectChar(std::string input);
bool	detectInt(std::string input);
bool	detectDouble(std::string input);
bool	detectFloat(std::string input);
int		detectType(std::string input);

void	castTypes(char *charResult, int *intResult, float *floatResult, double *doubleResult);
void	printEverything(char charResult, int intResult, float floatResult, double doubleResult);

#endif
