/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 16:38:02 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/26 11:24:24 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

public:

	ClapTrap(void);
	ClapTrap(ClapTrap const &src);
	~ClapTrap(void);

	ClapTrap	&operator=(ClapTrap const &rhs);

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:

	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	std::string		_name;
	unsigned int	_meleeAttackDamage;
	unsigned int	_rangedAttackDamage;
	unsigned int	_armorDamageReduction;
};

#endif
