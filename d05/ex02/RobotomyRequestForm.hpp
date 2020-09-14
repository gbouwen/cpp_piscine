/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 15:24:53 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/14 15:26:28 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM
# define ROBOTOMY_REQUEST_FORM

# include "Form.hpp"

class RobotomyRequestForm : public Form
{

public:

	RobotomyRequestForm(std::string target);

	void	execute(Bureaucrat const &executor);
}

#endif
