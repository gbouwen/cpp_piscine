/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 15:23:45 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/04 17:21:16 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string	getCorrectReplacementName(std::string original)
{
	std::string	newName = original;
	newName.append(".replace");
	return (newName);
}

void		replaceWords(std::ifstream &file, std::ofstream &replacement, std::string s1, std::string s2)
{
	std::string	line;
	size_t		pos;

	while (getline(file, line))
	{
		pos = line.find(s1);
		if (pos < line.length())
			line.replace(pos, s1.length(), s2);
		if (!file.eof())
			replacement << line << std::endl;
		else
			replacement << line;
	}
}

void		handleError(int	error)
{
	if (error == 1)
		std::cout << "Give a filename and two strings." << std::endl;
	if (error == 2)
		std::cout << "Could not open file." << std::endl;
	if (error == 3)
		std::cout << "Could not create output file stream." << std::endl;
	exit(0);
}

int			main(int ac, char **av)
{
	if (ac != 4)
		handleError(1);
	std::ifstream	fileStream(av[1]);
	if (!fileStream)
		handleError(2);
	std::string		newName = getCorrectReplacementName(av[1]);
	std::ofstream	replacementStream(newName);
	if (!replacementStream)
		handleError(3);
	replaceWords(fileStream, replacementStream, av[2], av[3]);
	return (0);
}
