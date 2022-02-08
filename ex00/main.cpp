/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:45:35 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/08 16:30:50 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap1;
	ClapTrap clapTrap2("ClapTrap 2");

	std::cout << "ClapTrap 1 name:" << clapTrap1 << std::endl;
	clapTrap1.set_name("ClapTrap 1");
	std::cout << "ClapTrap 1 name:"  << clapTrap1 << std::endl;
	std::cout << "ClapTrap 1 Hit points:"  << clapTrap1.get_hitPoints() << std::endl;
	std::cout << "ClapTrap 1 energy points:"  << clapTrap1.get_energyPoints() << std::endl;
	std::cout << "ClapTrap 1 attack damage:"  << clapTrap1.get_attackDamage() << std::endl;
	std::cout << std::endl;
	std::cout << "ClapTrap 2 name:"  << clapTrap2 << std::endl;
	std::cout << "ClapTrap 2 Hit points:"  << clapTrap2.get_hitPoints() << std::endl;
	clapTrap2.set_hitPoints(20);
	std::cout << "ClapTrap 2 set Hit points 20:"  << clapTrap2.get_hitPoints() << std::endl;
	std::cout << "ClapTrap 2 energy points:"  << clapTrap2.get_energyPoints() << std::endl;
	clapTrap2.set_energyPoints(30);
	std::cout << "ClapTrap 2 set energy points 30:"  << clapTrap2.get_energyPoints() << std::endl;
	std::cout << "ClapTrap 2 attack damage:"  << clapTrap2.get_attackDamage() << std::endl;
	clapTrap2.set_attackDamage(40);
	std::cout << "ClapTrap 2 set attack damage 40:"  << clapTrap2.get_attackDamage() << std::endl;
	
	return(0);
}