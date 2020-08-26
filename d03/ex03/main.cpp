/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/25 15:09:37 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/26 16:05:57 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
	FragTrap	fragOne;
	ScavTrap	scavOne("hi");
	NinjaTrap	ninjaOne;
	NinjaTrap	ninjaTwo(ninjaOne);
	NinjaTrap	ninjaThree("NINJATRAP");

	ninjaOne = NinjaTrap("boi");
	std::cout << "------------" << std::endl;
	ninjaOne.rangedAttack("duck");
	ninjaTwo.meleeAttack("fish");
	std::cout << "------------" << std::endl;
	ninjaThree.ninjaShoebox(fragOne);
	ninjaThree.ninjaShoebox(scavOne);
	ninjaThree.ninjaShoebox(ninjaOne);
	std::cout << "------------" << std::endl;
	ninjaThree.takeDamage(10);
	ninjaTwo.takeDamage(50);
	std::cout << "------------" << std::endl;
	ninjaThree.beRepaired(10);
	ninjaTwo.beRepaired(100);
	return (0);
}
