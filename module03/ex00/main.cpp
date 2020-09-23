/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 15:09:37 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/26 16:06:57 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	one;
	FragTrap	two(one);
	FragTrap	three("CLAPTRAP");

	one = FragTrap("name");
	std::cout << "----------------" << std::endl;
	one.rangedAttack("Dog");
	two.meleeAttack("Bird");
	std::cout << "----------------" << std::endl;
	three.vaultHunter_dot_exe("Robot");
	std::cout << "----------------" << std::endl;
	one.takeDamage(25);
	two.takeDamage(3);
	std::cout << "----------------" << std::endl;
	three.takeDamage(500);
	three.beRepaired(50);
	one.beRepaired(5000);
	std::cout << "----------------" << std::endl;
	three.vaultHunter_dot_exe("Robot");
	three.vaultHunter_dot_exe("Robot");
	three.vaultHunter_dot_exe("Robot");
	three.vaultHunter_dot_exe("Robot");
	return (0);
}
