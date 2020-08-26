/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 15:09:37 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/26 14:51:41 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	FragTrap	fragOne;
	FragTrap	fragTwo(fragOne);
	FragTrap	fragThree("FRAGTRAP");

	fragOne = FragTrap("name");
	fragOne.rangedAttack("Dog");
	fragTwo.meleeAttack("Bird");
	fragThree.vaultHunter_dot_exe("Robot");
	fragOne.takeDamage(25);
	fragTwo.takeDamage(3);
	fragThree.takeDamage(500);
	fragThree.beRepaired(50);
	fragOne.beRepaired(5000);
	fragThree.vaultHunter_dot_exe("Robot");
	fragThree.vaultHunter_dot_exe("Robot");
	fragThree.vaultHunter_dot_exe("Robot");
	fragThree.vaultHunter_dot_exe("Robot");
	std::cout << "--------------------------------" << std::endl;

	ScavTrap	scavOne;
	ScavTrap	scavTwo(scavOne);
	ScavTrap	scavThree("SCAVTRAP");

	scavOne = ScavTrap("scavvie");
	scavOne.rangedAttack("Lion");
	scavTwo.meleeAttack("Bear");
	scavThree.challengeNewcomer("A");
	scavThree.challengeNewcomer("B");
	scavThree.challengeNewcomer("C");
	scavOne.takeDamage(20);
	scavTwo.takeDamage(2);
	scavThree.takeDamage(200);
	scavThree.beRepaired(50);
	scavOne.beRepaired(5000);
	std::cout << "--------------------------------" << std::endl;

	NinjaTrap	ninjaOne;
	NinjaTrap	ninjaTwo(ninjaOne);
	NinjaTrap	ninjaThree("NINJATRAP");

	ninjaOne = NinjaTrap("boi");
	ninjaOne.rangedAttack("duck");
	ninjaTwo.meleeAttack("fish");
	ninjaThree.ninjaShoebox(fragOne);
	ninjaThree.ninjaShoebox(scavOne);
	ninjaThree.ninjaShoebox(ninjaOne);
	ninjaThree.takeDamage(10);
	ninjaTwo.takeDamage(50);
	ninjaThree.beRepaired(10);
	ninjaTwo.beRepaired(100);
	std::cout << "--------------------------------" << std::endl;

	SuperTrap	superOne;
	SuperTrap	superTwo(superOne);
	SuperTrap	superThree("SUPERTRAP");

	superOne = SuperTrap("super");
	superTwo.meleeAttack("zebra");
	superOne.rangedAttack("wolf");
	superOne.vaultHunter_dot_exe("enemy");
	superOne.vaultHunter_dot_exe("enemy");
	superOne.vaultHunter_dot_exe("enemy");
	superOne.vaultHunter_dot_exe("enemy");
	superOne.vaultHunter_dot_exe("enemy");
	superOne.ninjaShoebox(ninjaTwo);
	superOne.ninjaShoebox(fragOne);
	superOne.ninjaShoebox(scavOne);
	superOne.takeDamage(50);
	superTwo.takeDamage(100);
	superTwo.beRepaired(20);
	superOne.beRepaired(50);
	return (0);
}
