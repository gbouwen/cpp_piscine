/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:23:53 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/03 13:28:42 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	memoryLeak()
{
	std::string	*panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}
