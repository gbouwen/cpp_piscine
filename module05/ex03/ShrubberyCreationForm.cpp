/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 15:21:55 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/21 15:08:12 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
	Form::operator=(src);
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery creation form", 145, 137, target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	Form::setSigned(rhs.getSigned());
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::checkRequirements(executor);
	std::string		target = this->getTarget() + "_shrubbery";
	std::ofstream	targetFile(target.c_str());

	if (!targetFile)
	{
		std::cout << "Error creating target file" << std::endl;
		return ;
	}
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
	std::cout << "planted some trees at " << target << std::endl;
	return ;
}
