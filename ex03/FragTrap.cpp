/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 02:05:00 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/09 05:09:40 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	FragTrap::__hitPoints = 100;
int	FragTrap::__energyPoints = 100;
int	FragTrap::__attackDamage = 30;

FragTrap::FragTrap(void)
{
	this->set_name("");
	this->set_hitPoints(100);
	this->set_energyPoints(100);
	this->set_attackDamage(30);
	std::cout << "FragTrap no named was born!" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	*this = src;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap "<< this->get_name() <<" has die!" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

FragTrap::FragTrap(std::string name)
{
	this->set_name(name);
	this->set_hitPoints(100);
	this->set_energyPoints(100);
	this->set_attackDamage(30);
	std::cout << "FragTrap " << this->get_name() << " was born!" << std::endl;
	return ;
}

void FragTrap::attack(const std::string& target)
{
	int	currentEnergy;
	
	currentEnergy = this->get_energyPoints();
	if (currentEnergy > 0)
	{
		std::cout	<<	"FragTrap "
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



void FragTrap::highFivesGuys(void)
{
	std::cout << "Hi five!⚡⚡⚡⚡⚡" << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, FragTrap const & src)
{
	o << "FragTrap: " <<src.get_name();
	return(o);
}
