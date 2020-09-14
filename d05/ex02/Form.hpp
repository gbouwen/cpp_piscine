/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 13:18:23 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/14 15:21:10 by gbouwen       ########   odam.nl         */
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

	Form(void);

	std::string		_name;
	bool			_signed;
	unsigned int	_gradeToSign;
	unsigned int	_gradeToExecute;
	std::string		_target;
};

std::ostream	&operator<<(std::ostream &o, Form const &src);

#endif
