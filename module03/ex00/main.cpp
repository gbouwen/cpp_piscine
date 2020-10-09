/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 15:09:37 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/08 18:05:33 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	srand(time(NULL));
	std::cout << "CONSTRUCTOR MESSAGES" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "FragTrap one;" << std::endl;
	FragTrap	one;
	std::cout << "FragTrap two(one);" << std::endl;
	FragTrap	two(one);
	std::cout << "FragTrap three(CLAPTRAP)" << std::endl;
	FragTrap	three("CLAPTRAP");

	std::cout << "one = FragTrap(name)" << std::endl;
	one = FragTrap("name");
	std::cout << "----------------" << std::endl;
	std::cout << "one.rangedAttack(Dog)" << std::endl;
	one.rangedAttack("Dog");
	std::cout << "two.meleeAttack(Bird)" << std::endl;
	two.meleeAttack("Bird");
	std::cout << "----------------" << std::endl;
	std::cout << "three.vaultHunter_dot_exe(Robot)" << std::endl;
	three.vaultHunter_dot_exe("Robot");
	std::cout << "----------------" << std::endl;
	std::cout << "one.takeDamage(25)" << std::endl;
	one.takeDamage(25);
	std::cout << "two.takeDamage(3)" << std::endl;
	two.takeDamage(3);
	std::cout << "----------------" << std::endl;
	std::cout << "three.takeDamage(500)" << std::endl;
	three.takeDamage(500);
	std::cout << "three.beRepaired(50)" << std::endl;
	three.beRepaired(50);
	std::cout << "one.beRepaired(5000)" << std::endl;
	one.beRepaired(5000);
	std::cout << "----------------" << std::endl;
	std::cout << "three.vaultHunter_dot_exe(Robot)" << std::endl;
	three.vaultHunter_dot_exe("Robot");
	std::cout << "three.vaultHunter_dot_exe(Robot)" << std::endl;
	three.vaultHunter_dot_exe("Robot");
	std::cout << "three.vaultHunter_dot_exe(Robot)" << std::endl;
	three.vaultHunter_dot_exe("Robot");
	std::cout << "three.vaultHunter_dot_exe(Robot)" << std::endl;
	three.vaultHunter_dot_exe("Robot");
	return (0);
}
