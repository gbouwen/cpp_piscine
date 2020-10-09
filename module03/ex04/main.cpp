/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 15:09:37 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/09 11:11:57 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	std::cout << "SUPERTRAP" << std::endl;
	std::cout << "CONSTRUCTOR MESSAGES" << std::endl;
	std::cout << "FragTrap fragOne;" << std::endl;
	FragTrap	fragOne;
	std::cout << "ScavTrap scavOne;" << std::endl;
	ScavTrap	scavOne;
	std::cout << "NinjaTrap ninjaOne;" << std::endl;
	NinjaTrap	ninjaOne;
	std::cout << "SuperTrap superOne;" << std::endl;
	SuperTrap	superOne;
	std::cout << "SuperTrap superTwo(superOne);" << std::endl;
	SuperTrap	superTwo(superOne);
	std::cout << "superThree(SUPERTRAP);" << std::endl;
	SuperTrap	superThree("SUPERTRAP");

	std::cout << "SuperOne = SuperTrap(super);" << std::endl;
	superOne = SuperTrap("super");
	std::cout << "--------------" << std::endl;
	std::cout << "superTwo.meleeAttack(zebra);" << std::endl;
	superTwo.meleeAttack("zebra");
	std::cout << "superOne.rangedAttack(wolf);" << std::endl;
	superOne.rangedAttack("wolf");
	std::cout << "--------------" << std::endl;
	std::cout << "superOne.vaultHunter_dot_exe(enemy);" << std::endl;
	superOne.vaultHunter_dot_exe("enemy");
	std::cout << "superOne.vaultHunter_dot_exe(enemy);" << std::endl;
	superOne.vaultHunter_dot_exe("enemy");
	std::cout << "superOne.vaultHunter_dot_exe(enemy);" << std::endl;
	superOne.vaultHunter_dot_exe("enemy");
	std::cout << "superOne.vaultHunter_dot_exe(enemy);" << std::endl;
	superOne.vaultHunter_dot_exe("enemy");
	std::cout << "superOne.vaultHunter_dot_exe(enemy);" << std::endl;
	superOne.vaultHunter_dot_exe("enemy");
	std::cout << "--------------" << std::endl;
	std::cout << "superOne.ninjaShoebox(ninjaOne);" << std::endl;
	superOne.ninjaShoebox(ninjaOne);
	std::cout << "superOne.ninjaShoebox(fragOne);" << std::endl;
	superOne.ninjaShoebox(fragOne);
	std::cout << "superOne.ninjaShoebox(scavOne);" << std::endl;
	superOne.ninjaShoebox(scavOne);
	std::cout << "--------------" << std::endl;
	std::cout << "superOne.takeDamage(50);" << std::endl;
	superOne.takeDamage(50);
	std::cout << "superTwo.takeDamage(100);" << std::endl;
	superTwo.takeDamage(100);
	std::cout << "--------------" << std::endl;
	std::cout << "superTwo.beRepaired(20);" << std::endl;
	superTwo.beRepaired(20);
	std::cout << "superOne.beRepaireD(50);" << std::endl;
	superOne.beRepaired(50);
	return (0);
}
