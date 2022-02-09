/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:45:35 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/09 05:18:04 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
	//Basic tests
	DiamondTrap diamondTrap("Monster1");
	std::cout << diamondTrap << std::endl;
	std::cout << "diamondTrap Hit points: "  << diamondTrap.get_hitPoints() << std::endl;
	std::cout << "diamondTrap energy points: "  << diamondTrap.get_energyPoints() << std::endl;
	std::cout << "diamondTrap attack damage: "  << diamondTrap.get_attackDamage() << std::endl;
	diamondTrap.whoAmI();
	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();
	std::cout << std::endl;

	FragTrap fragTrap("RobotF");
	diamondTrap.attack(fragTrap.get_name());
	std::cout << std::endl;

	ScavTrap scavTrap("RobotS");
	diamondTrap.attack(scavTrap.get_name());
	std::cout << std::endl;

	ClapTrap clapTrap("Robot");
	diamondTrap.attack(clapTrap.get_name());
	std::cout << std::endl;
	return(0);
}