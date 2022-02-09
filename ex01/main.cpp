/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:45:35 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/09 02:01:38 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	//Basic tests
	ScavTrap scavTrap1;
	scavTrap1.set_name("Robot1");
	std::cout << scavTrap1 << std::endl;
	std::cout << "ScavTrap1 Hit points: "  << scavTrap1.get_hitPoints() << std::endl;
	std::cout << "ScavTrap1 energy points: "  << scavTrap1.get_energyPoints() << std::endl;
	std::cout << "ScavTrap1 attack damage: "  << scavTrap1.get_attackDamage() << std::endl;
	scavTrap1.guardGate();
	std::cout << std::endl;
	
	ScavTrap scavTrap2("Robot2");
	std::cout << scavTrap2 << std::endl;
	std::cout << "scavTrap2 Hit points: "  << scavTrap2.get_hitPoints() << std::endl;
	std::cout << "scavTrap2 energy points: "  << scavTrap2.get_energyPoints() << std::endl;
	std::cout << "scavTrap2 attack damage: "  << scavTrap2.get_attackDamage() << std::endl;
	scavTrap2.guardGate();
	std::cout << std::endl;

	ScavTrap scavTrap3 = scavTrap2;
	scavTrap3.set_name("Robot3");
	std::cout << scavTrap3 << std::endl;
	std::cout << "scavTrap3 Hit points: "  << scavTrap3.get_hitPoints() << std::endl;
	std::cout << "scavTrap3 energy points: "  << scavTrap3.get_energyPoints() << std::endl;
	std::cout << "scavTrap3 attack damage: "  << scavTrap3.get_attackDamage() << std::endl;
	scavTrap3.guardGate();
	std::cout << std::endl;


	ScavTrap scavTrap4(scavTrap1);
	scavTrap4.set_name("Robot4");
	std::cout << scavTrap4 << std::endl;
	std::cout << "scavTrap4 Hit points: "  << scavTrap4.get_hitPoints() << std::endl;
	std::cout << "scavTrap4 energy points: "  << scavTrap4.get_energyPoints() << std::endl;
	std::cout << "scavTrap4 attack damage: "  << scavTrap4.get_attackDamage() << std::endl;
	scavTrap4.guardGate();
	std::cout << std::endl;

	scavTrap1.attack(scavTrap2.get_name());
	std::cout << std::endl;
	scavTrap2.attack(scavTrap3.get_name());
	std::cout << std::endl;
	scavTrap3.attack(scavTrap4.get_name());
	std::cout << std::endl;
	scavTrap4.attack(scavTrap1.get_name());
	std::cout << std::endl;
	return(0);
}