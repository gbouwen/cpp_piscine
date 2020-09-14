/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 10:19:19 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/14 14:30:46 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{

public:

	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat(void);

	Bureaucrat	&operator=(Bureaucrat const &rhs);

	std::string		getName(void) const;
	unsigned int	getGrade(void) const;

	void			incrementGrade(void);
	void			decrementGrade(void);
	void			signForm(Form &form) const;

	class GradeTooHighException : public std::exception
	{

	public:

		GradeTooHighException(std::string error);

		const char	*what(void) const noexcept;

	private:

		std::string	_errorMessage;
	};

	class GradeTooLowException : public std::exception
	{

	public:

		GradeTooLowException(std::string error);

		const char	*what(void) const noexcept;

	private:

		std::string	_errorMessage;
	};

private:

	Bureaucrat(void);

	std::string		_name;
	unsigned int	_grade;

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src);

#endif
