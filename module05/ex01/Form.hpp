/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 13:18:23 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/21 14:06:24 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{

public:

	Form(void);
	Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute);
	Form(Form const &src);
	~Form(void);

	Form	&operator=(Form const &rhs);

	std::string		getName(void) const;
	bool			getSigned(void) const;
	unsigned int	getGradeToSign(void) const;
	unsigned int	getGradeToExecute(void) const;

	void			beSigned(Bureaucrat	const &src);

	class GradeTooHighException : public std::exception
	{

	public:

		GradeTooHighException(std::string error);

		const char	*what(void) const throw();
		~GradeTooHighException(void) throw();

	private:

		std::string	_errorMessage;
	};

	class GradeTooLowException : public std::exception
	{

	public:

		GradeTooLowException(std::string error);

		const char	*what(void) const throw();
		~GradeTooLowException(void) throw();

	private:

		std::string	_errorMessage;
	};

	class FormAlreadySignedException : public std::exception
	{

	public:

		FormAlreadySignedException(std::string error);

		const char	*what(void) const throw();
		~FormAlreadySignedException(void) throw();

	private:

		std::string	_errorMessage;
	};

private:

	std::string const	_name;
	bool				_signed;
	unsigned int const 	_gradeToSign;
	unsigned int const	_gradeToExecute;
};

std::ostream	&operator<<(std::ostream &o, Form const &src);

#endif
