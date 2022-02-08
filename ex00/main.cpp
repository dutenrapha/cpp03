/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:45:35 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/08 17:18:15 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	//Basic tests
	ClapTrap clapTrap1;
	ClapTrap clapTrap2("Warrior2");

	std::cout << "ClapTrap 1 name: " << clapTrap1 << std::endl;
	clapTrap1.set_name("Warrior1");
	std::cout << "ClapTrap 1 name: "  << clapTrap1 << std::endl;
	std::cout << "ClapTrap 1 Hit points: "  << clapTrap1.get_hitPoints() << std::endl;
	std::cout << "ClapTrap 1 energy points: "  << clapTrap1.get_energyPoints() << std::endl;
	std::cout << "ClapTrap 1 attack damage: "  << clapTrap1.get_attackDamage() << std::endl;
	std::cout << std::endl;
	std::cout << "ClapTrap 2 name: "  << clapTrap2 << std::endl;
	std::cout << "ClapTrap 2 Hit points: "  << clapTrap2.get_hitPoints() << std::endl;
	clapTrap2.set_hitPoints(20);
	std::cout << "ClapTrap 2 set Hit points 20: "  << clapTrap2.get_hitPoints() << std::endl;
	std::cout << "ClapTrap 2 energy points: "  << clapTrap2.get_energyPoints() << std::endl;
	clapTrap2.set_energyPoints(30);
	std::cout << "ClapTrap 2 set energy points 30: "  << clapTrap2.get_energyPoints() << std::endl;
	std::cout << "ClapTrap 2 attack damage 0: "  << clapTrap2.get_attackDamage() << std::endl;
	clapTrap2.set_attackDamage(40);
	std::cout << "ClapTrap 2 set attack damage 40: "  << clapTrap2.get_attackDamage() << std::endl;
	std::cout << std::endl;
	
	//Attack test
	std::cout << "ClapTrap 1 attacks ClapTrap 2 " << std::endl;
	clapTrap1.attack(clapTrap2.get_name());
	std::cout << "ClapTrap 1 fails to attack ClapTrap 2 " << std::endl;
	clapTrap1.set_energyPoints(0);
	clapTrap1.attack(clapTrap2.get_name());
	std::cout << std::endl;

	//Repair test
	std::cout << "ClapTrap 1 has "<< clapTrap1.get_hitPoints() <<" hit points" << std::endl;
	clapTrap1.set_energyPoints(3);
	clapTrap1.beRepaired(10);
	std::cout << "ClapTrap 2 fails repair itsefl in 10 hit points" << std::endl;
	clapTrap2.set_energyPoints(0);
	clapTrap2.beRepaired(10);
	std::cout << std::endl;
	
	//takeDamage test
	std::cout << "ClapTrap 2 has "<< clapTrap2.get_hitPoints() <<" hit points" << std::endl;
	clapTrap2.takeDamage(2);
	std::cout << std::endl;
	return(0);
}