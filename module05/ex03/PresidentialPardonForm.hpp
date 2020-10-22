/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 15:28:51 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/21 15:26:12 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{

public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm(void);

	PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);

	void	execute(Bureaucrat const &executor) const;
};

#endif
