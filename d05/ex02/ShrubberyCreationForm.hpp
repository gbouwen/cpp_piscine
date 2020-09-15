/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 15:08:33 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/15 11:11:13 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{

public:

	ShrubberyCreationForm(std::string target);

	void	execute(Bureaucrat const &src) const;
};

#endif
