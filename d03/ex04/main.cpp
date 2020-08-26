/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 15:09:37 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/26 16:11:13 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	FragTrap	fragOne;
	ScavTrap	scavOne;
	NinjaTrap	ninjaOne;
	SuperTrap	superOne;
	SuperTrap	superTwo(superOne);
	SuperTrap	superThree("SUPERTRAP");

	superOne = SuperTrap("super");
	std::cout << "--------------" << std::endl;
	superTwo.meleeAttack("zebra");
	superOne.rangedAttack("wolf");
	std::cout << "--------------" << std::endl;
	superOne.vaultHunter_dot_exe("enemy");
	superOne.vaultHunter_dot_exe("enemy");
	superOne.vaultHunter_dot_exe("enemy");
	superOne.vaultHunter_dot_exe("enemy");
	superOne.vaultHunter_dot_exe("enemy");
	std::cout << "--------------" << std::endl;
	superOne.ninjaShoebox(ninjaOne);
	superOne.ninjaShoebox(fragOne);
	superOne.ninjaShoebox(scavOne);
	std::cout << "--------------" << std::endl;
	superOne.takeDamage(50);
	superTwo.takeDamage(100);
	std::cout << "--------------" << std::endl;
	superTwo.beRepaired(20);
	superOne.beRepaired(50);
	return (0);
}
