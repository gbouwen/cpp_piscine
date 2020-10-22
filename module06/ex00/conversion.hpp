/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversion.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/19 13:16:19 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/19 13:50:24 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <limits.h>
#include <cstdlib>
#include <iomanip>

void	printPseudoLiterals(std::string input);
bool	checkPseudoLiterals(std::string input);

bool	validateString(std::string input);

int		detectType(std::string input);

void	print(std::string input, int type);
void	printImpossible(void);

#endif
