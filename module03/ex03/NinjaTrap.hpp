/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 13:01:36 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/13 10:53:25 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{

public:

	NinjaTrap(void);
	NinjaTrap(NinjaTrap const &src);
	NinjaTrap(std::string name);
	~NinjaTrap(void);

	NinjaTrap	&operator=(NinjaTrap const &rhs);

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);

	void	ninjaShoebox(ClapTrap &ct);
	void	ninjaShoebox(FragTrap &ft);
	void	ninjaShoebox(ScavTrap &st);
	void	ninjaShoebox(NinjaTrap &nt);
};

#endif
