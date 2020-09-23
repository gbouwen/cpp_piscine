/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 15:21:55 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/22 14:50:30 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery creation form", 145, 137, target)
{
	return ;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string		target = this->getTarget() + "_shrubbery";
	std::ofstream	targetFile(target.c_str());

	if (!targetFile)
	{
		std::cout << "Error creating target file" << std::endl;
		return ;
	}
	Form::execute(executor);
	targetFile << "      /\\       " << "      /\\       " << std::endl;
	targetFile << "     /\\*\\      " << "     /\\*\\      " << std::endl;
	targetFile << "    /\\O\\*\\     " << "    /\\O\\*\\     " << std::endl;
	targetFile << "   /*/\\/\\/\\    " << "   /*/\\/\\/\\    " << std::endl;
	targetFile << "  /\\O\\/\\*\\/\\   " << "  /\\O\\/\\*\\/\\   " << std::endl;
	targetFile << " /\\*\\/\\*\\/\\/\\  " << " /\\*\\/\\*\\/\\/\\  " << std::endl;
	targetFile << "/\\O\\/\\/*/\\/O/\\ " << "/\\O\\/\\/*/\\/O/\\ " << std::endl;
	targetFile << "      ||       " << "      ||       " << std::endl;
	targetFile << "      ||       " << "      ||       " << std::endl;
	targetFile << "      ||       " << "      ||       " << std::endl;
	targetFile.close();
}
