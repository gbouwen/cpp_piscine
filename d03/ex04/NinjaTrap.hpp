/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:01:36 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/26 13:24:38 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{

public:

	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &src);
	~NinjaTrap(void);

	NinjaTrap	&operator=(NinjaTrap const &rhs);

	void	ninjaShoebox(FragTrap &ft);
	void	ninjaShoebox(ScavTrap &st);
	void	ninjaShoebox(NinjaTrap &nt);
};

#endif
