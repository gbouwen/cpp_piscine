/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 11:59:04 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/07/28 14:52:38 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{

public:

	Contact(void);
	~Contact(void);

	std::string	get_firstName(void) const;
	std::string	get_lastName(void) const;
	std::string	get_nickName(void) const;
	std::string	get_login(void) const;
	std::string	get_postalAddress(void) const;
	std::string	get_emailAddress(void) const;
	std::string	get_phoneNumber(void) const;
	std::string	get_birthdayDate(void) const;
	std::string	get_favoriteMeal(void) const;
	std::string	get_underwearColor(void) const;
	std::string	get_darkestSecret(void) const;

	void		set_firstName(void);
	void		set_lastName(void);
	void		set_nickName(void);
	void		set_login(void);
	void		set_postalAddress(void);
	void		set_emailAddress(void);
	void		set_phoneNumber(void);
	void		set_birthdayDate(void);
	void		set_favoriteMeal(void);
	void		set_underwearColor(void);
	void		set_darkestSecret(void);

private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_login;
	std::string	_postalAddress;
	std::string	_emailAddress;
	std::string	_phoneNumber;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
};

#endif
