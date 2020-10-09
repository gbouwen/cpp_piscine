/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 15:09:37 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/08 18:08:41 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	srand(time(NULL));
	{
		std::cout << "FRAGTRAP" << std::endl;
		std::cout << "CONSTRUCTOR MESSAGES" << std::endl;
		std::cout << "----------------" << std::endl;
		std::cout << "Fragtrap one;" << std::endl;
		FragTrap	one;
		std::cout << "FragTrap two(one);" << std::endl;
		FragTrap	two(one);
		std::cout << "FragTrap three(CLAPTRAP);" << std::endl;
		FragTrap	three("CLAPTRAP");

		std::cout << "one = FragTrap(name);" << std::endl;
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
	}
	std::cout << "-------------------------------------------------------------------------" << std::endl;
	{
		std::cout << "SCAVTRAP" << std::endl;
		std::cout << "CONSTRUCTOR MESSAGES" << std::endl;
		std::cout << "-----------" << std::endl;
		std::cout << "ScavTrap scavOne;" << std::endl;
		ScavTrap	scavOne;
		std::cout << "ScavTrap scavTwo(scavOne);" << std::endl;
		ScavTrap	scavTwo(scavOne);
		std::cout << "ScavTrap scavThree(SCAVTRAP);" << std::endl;
		ScavTrap	scavThree("SCAVTRAP");

		std::cout << "ScavOne = ScavTrap(scavvie);" << std::endl;
		scavOne = ScavTrap("scavvie");
		std::cout << "-----------" << std::endl;
		std::cout << "scavOne.rangedAttack(Lion)" << std::endl;
		scavOne.rangedAttack("Lion");
		std::cout << "scavTwo.meleeAttack(Bear)" << std::endl;
		scavTwo.meleeAttack("Bear");
		std::cout << "-----------" << std::endl;
		std::cout << "scavThree.challengeNewcomer(A)" << std::endl;
		scavThree.challengeNewcomer("A");
		std::cout << "scavThree.challengeNewcomer(B)" << std::endl;
		scavThree.challengeNewcomer("B");
		std::cout << "scavThree.challengeNewcomer(C)" << std::endl;
		scavThree.challengeNewcomer("C");
		std::cout << "-----------" << std::endl;
		std::cout << "scavOne.takeDamage(20)" << std::endl;
		scavOne.takeDamage(20);
		std::cout << "scavTwo.takeDamage(2)" << std::endl;
		scavTwo.takeDamage(2);
		std::cout << "scavThree.takeDamage(200)" << std::endl;
		scavThree.takeDamage(200);
		std::cout << "-----------" << std::endl;
		std::cout << "scavThree.beRepaired(50)" << std::endl;
		scavThree.beRepaired(50);
		std::cout << "scavOne.beRepaired(5000)" << std::endl;
		scavOne.beRepaired(5000);
	}
	return (0);
}
