/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 12:25:38 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/13 10:43:33 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:

	FragTrap(void);
	FragTrap(FragTrap const &src);
	FragTrap(std::string name);
	~FragTrap(void);

	FragTrap	&operator=(FragTrap const &rhs);

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);

	void	vaultHunter_dot_exe(std::string const &target);
};

#endif
