/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 12:06:39 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/15 14:34:51 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{

public:

	Intern(void);
	Intern(Intern const &src);
	~Intern(void);

	Intern	&operator=(Intern const &rhs);
	Form	*makeForm(std::string formName, std::string target);

private:

	Form	*_allFormTypes[3];
};

#endif
