/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 15:09:37 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/26 16:08:29 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	{
		FragTrap	fragOne;
		FragTrap	fragTwo(fragOne);
		FragTrap	fragThree("FRAGTRAP");

		fragOne = FragTrap("name");
		std::cout << "-----------" << std::endl;
		fragOne.rangedAttack("Dog");
		fragTwo.meleeAttack("Bird");
		std::cout << "-----------" << std::endl;
		fragThree.vaultHunter_dot_exe("Robot");
		std::cout << "-----------" << std::endl;
		fragOne.takeDamage(25);
		fragTwo.takeDamage(3);
		std::cout << "-----------" << std::endl;
		fragThree.takeDamage(500);
		fragThree.beRepaired(50);
		fragOne.beRepaired(5000);
		std::cout << "-----------" << std::endl;
		fragThree.vaultHunter_dot_exe("Robot");
		fragThree.vaultHunter_dot_exe("Robot");
		fragThree.vaultHunter_dot_exe("Robot");
		fragThree.vaultHunter_dot_exe("Robot");
	}
	std::cout << "--------------------------------" << std::endl;
	{
		ScavTrap	scavOne;
		ScavTrap	scavTwo(scavOne);
		ScavTrap	scavThree("SCAVTRAP");

		scavOne = ScavTrap("scavvie");
		std::cout << "-----------" << std::endl;
		scavOne.rangedAttack("Lion");
		scavTwo.meleeAttack("Bear");
		std::cout << "-----------" << std::endl;
		scavThree.challengeNewcomer("A");
		scavThree.challengeNewcomer("B");
		scavThree.challengeNewcomer("C");
		std::cout << "-----------" << std::endl;
		scavOne.takeDamage(20);
		scavTwo.takeDamage(2);
		scavThree.takeDamage(200);
		std::cout << "-----------" << std::endl;
		scavThree.beRepaired(50);
		scavOne.beRepaired(5000);
	}
	return (0);
}
