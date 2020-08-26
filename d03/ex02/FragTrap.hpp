/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 12:25:38 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/26 16:20:12 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:

	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);

	void	vaultHunter_dot_exe(std::string const &target);
};

#endif
