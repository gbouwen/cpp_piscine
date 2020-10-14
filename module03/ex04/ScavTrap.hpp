/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 12:25:38 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/13 10:47:24 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:

	ScavTrap(void);
	ScavTrap(ScavTrap const &src);
	ScavTrap(std::string name);
	~ScavTrap(void);

	ScavTrap	&operator=(ScavTrap const &rhs);

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);

	void	challengeNewcomer(std::string const &newcomer);
};

#endif
