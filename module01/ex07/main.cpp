/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 15:23:45 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/23 14:21:14 by gbouwen       ########   odam.nl         */
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

void		replaceWords(std::ifstream &file, std::ofstream &replacementFile,
							std::string wordToReplace, std::string replacementWord)
{
	std::string	line;
	size_t		pos;

	pos = 0;
	while (getline(file, line))
	{
		while (pos < line.length())
		{
			pos = line.find(wordToReplace);
			if (pos < line.length())
				line.replace(pos, wordToReplace.length(), replacementWord);
		}
		if (!file.eof())
			replacementFile << line << std::endl;
		else
			replacementFile << line;
	}
	return ;
}

void		handleError(int	error)
{
	if (error == 1)
		std::cout << "Give a filename and two strings." << std::endl;
	if (error == 2)
		std::cout << "Could not open file." << std::endl;
	if (error == 3)
		std::cout << "Could not create output file stream." << std::endl;
	return ;
}

int			main(int ac, char **av)
{
	if (ac != 4)
	{
		handleError(1);
		return (-1);
	}
	std::ifstream	fileStream(av[1]);
	if (!fileStream)
	{
		handleError(2);
		return (-1);
	}
	std::string		newName = getCorrectReplacementName(av[1]);
	std::ofstream	replacementStream(newName.c_str());
	if (!replacementStream)
	{
		handleError(3);
		return (-1);
	}
	replaceWords(fileStream, replacementStream, av[2], av[3]);
	return (0);
}
