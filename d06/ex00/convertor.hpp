/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convertor.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 11:59:24 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/17 17:05:36 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

# include <string>
# include <iostream>
# include <cctype>
# include <limits>
# include <cstdlib>

int		detectType(std::string input);

void	castTypes(char *charResult, int *intResult, float *floatResult, double *doubleResult);
void	printEverything(char charResult, int intResult, float floatResult, double doubleResult);

#endif
