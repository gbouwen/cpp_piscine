/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 15:24:53 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/21 15:26:30 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM
# define ROBOTOMY_REQUEST_FORM

# include "Form.hpp"
# include <stdlib.h>

class RobotomyRequestForm : public Form
{

public:

	RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm(void);

	RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);

	void	execute(Bureaucrat const &executor) const;
};

#endif
