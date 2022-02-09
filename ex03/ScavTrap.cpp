/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:27:29 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/09 05:10:45 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	ScavTrap::__hitPoints = 100;
int	ScavTrap::__energyPoints = 50;
int	ScavTrap::__attackDamage = 20;

ScavTrap::ScavTrap(void)
{
	this->set_name("");
	this->set_hitPoints(100);
	this->set_energyPoints(50);
	this->set_attackDamage(20);
	std::cout << "ScavTrap no named was born!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap "<< this->get_name() <<" has die!" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	if (this != &rhs)
	{
		this->set_name(rhs.get_name());
		this->set_hitPoints(rhs.get_hitPoints());
		this->set_energyPoints(rhs.get_energyPoints());
		this->set_attackDamage(rhs.get_attackDamage());
	}
	return(*this);
}

ScavTrap::ScavTrap(std::string name)
{
	this->set_name(name);
	this->set_hitPoints(100);
	this->set_energyPoints(50);
	this->set_attackDamage(20);
	std::cout << "ScavTrap " << this->get_name() << " was born!" << std::endl;
	return ;
}

void ScavTrap::attack(const std::string& target)
{
	int	currentEnergy;
	
	currentEnergy = this->get_energyPoints();
	if (currentEnergy > 0)
	{
		std::cout	<<	"ScavTrap "
					<<	this->get_name()
					<<	" attacks "
					<< target 
					<< ", causing "
					<< this->get_attackDamage()
					<< " points of damage!"
					<< std::endl;
		currentEnergy--;
		this->set_energyPoints(currentEnergy);
		std::cout 	<< "Now "
					<< this->get_name()
					<< " have " 
					<< this->get_energyPoints() 
					<< " energy points." 
					<< std::endl;
	}
	else
	{
		std::cout 	<< "You don't have enough energy points to attack!" 
					<< std::endl;
	}
	return ;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap "<< this->get_name() << " is now in Gate keeper mode" << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, ScavTrap const & src)
{
	o << "ScavTrap: " << src.get_name();
	return(o);
}