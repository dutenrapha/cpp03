/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:45:35 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/09 02:33:27 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	//Basic tests
	FragTrap fragTrap1;
	fragTrap1.set_name("Robot1");
	std::cout << fragTrap1 << std::endl;
	std::cout << "fragTrap1 Hit points: "  << fragTrap1.get_hitPoints() << std::endl;
	std::cout << "fragTrap1 energy points: "  << fragTrap1.get_energyPoints() << std::endl;
	std::cout << "fragTrap1 attack damage: "  << fragTrap1.get_attackDamage() << std::endl;
	fragTrap1.highFivesGuys();
	std::cout << std::endl;
	
	FragTrap fragTrap2("Robot2");
	std::cout << fragTrap2 << std::endl;
	std::cout << "fragTrap2 Hit points: "  << fragTrap2.get_hitPoints() << std::endl;
	std::cout << "fragTrap2 energy points: "  << fragTrap2.get_energyPoints() << std::endl;
	std::cout << "fragTrap2 attack damage: "  << fragTrap2.get_attackDamage() << std::endl;
	fragTrap2.highFivesGuys();
	std::cout << std::endl;

	FragTrap fragTrap3 = fragTrap2;
	fragTrap3.set_name("Robot3");
	std::cout << fragTrap3 << std::endl;
	std::cout << "fragTrap3 Hit points: "  << fragTrap3.get_hitPoints() << std::endl;
	std::cout << "fragTrap3 energy points: "  << fragTrap3.get_energyPoints() << std::endl;
	std::cout << "fragTrap3 attack damage: "  << fragTrap3.get_attackDamage() << std::endl;
	fragTrap3.highFivesGuys();
	std::cout << std::endl;


	FragTrap fragTrap4(fragTrap1);
	fragTrap4.set_name("Robot4");
	std::cout << fragTrap4 << std::endl;
	std::cout << "fragTrap4 Hit points: "  << fragTrap4.get_hitPoints() << std::endl;
	std::cout << "fragTrap4 energy points: "  << fragTrap4.get_energyPoints() << std::endl;
	std::cout << "fragTrap4 attack damage: "  << fragTrap4.get_attackDamage() << std::endl;
	fragTrap4.highFivesGuys();
	std::cout << std::endl;

	fragTrap1.attack(fragTrap2.get_name());
	std::cout << std::endl;
	fragTrap2.attack(fragTrap3.get_name());
	std::cout << std::endl;
	fragTrap3.attack(fragTrap4.get_name());
	std::cout << std::endl;
	fragTrap4.attack(fragTrap1.get_name());
	std::cout << std::endl;
	return(0);
}