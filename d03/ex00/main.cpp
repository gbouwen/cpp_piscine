/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 15:09:37 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/25 15:35:20 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	one;
	FragTrap	two(one);
	FragTrap	three("CLAPTRAP");

	one = FragTrap("name");
	one.rangedAttack("Dog");
	two.meleeAttack("Bird");
	three.vaultHunter_dot_exe("Robot");
	one.takeDamage(25);
	two.takeDamage(3);
	three.takeDamage(500);
	three.beRepaired(50);
	one.beRepaired(5000);
	three.vaultHunter_dot_exe("Robot");
	three.vaultHunter_dot_exe("Robot");
	three.vaultHunter_dot_exe("Robot");
	three.vaultHunter_dot_exe("Robot");
	return (0);
}
