/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:45:31 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/08 17:17:39 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->set_name("");
	this->set_hitPoints(10);
	this->set_energyPoints(10);
	this->set_attackDamage(0);
	std::cout << "ClapTrap "<< this->get_name() <<" was born!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src) : _name(src.get_name()) , _hitPoints(src.get_hitPoints()), _energyPoints(src.get_energyPoints()), _attackDamage(src.get_attackDamage() )
{
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap "<< this->get_name() <<" has die!" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	(void)rhs;
	return(*this);
}

ClapTrap::ClapTrap(std::string	name)
{
	this->set_name(name);
	this->set_hitPoints(10);
	this->set_energyPoints(10);
	this->set_attackDamage(0);
	std::cout << "ClapTrap "<< this->get_name() << " was born!" << std::endl;
	return ;
}

const std::string	ClapTrap::get_name(void)	const
{
	return(this->_name);
}

int	ClapTrap::get_hitPoints(void)	const
{
	return(this->_hitPoints);
}

int	ClapTrap::get_energyPoints(void)	const
{
	return(this->_energyPoints);
}

int	ClapTrap::get_attackDamage(void)	const
{
	return(this->_attackDamage);	
}

void	ClapTrap::set_name(std::string name)
{
	this->_name = name;
}

void	ClapTrap::set_hitPoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void	ClapTrap::set_energyPoints(int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	ClapTrap::set_attackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
}

void ClapTrap::attack(const std::string& target)
{
	int	currentEnergy;
	
	currentEnergy = this->get_energyPoints();
	if (currentEnergy > 0)
	{
		std::cout	<<	"ClapTrap "
					<<	this->get_name()
					<<	" attacks "
					<< target 
					<< ", causing "
					<< this->get_attackDamage()
					<< " points of damage!"
					<< std::endl;
		currentEnergy--;
		this->set_energyPoints(currentEnergy);
		std::cout 	<< "Now you have " 
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

void ClapTrap::takeDamage(unsigned int amount)
{
	int currentHitPoints;
	
	currentHitPoints = this->get_hitPoints();
	currentHitPoints -= amount;
	this->set_hitPoints(currentHitPoints);
	std::cout	<<	"ClapTrap "
				<<	this->get_name()
				<<	" take damage of "
				<< amount 
				<< "!"
				<< std::endl
				<< "Now " 
				<< this->get_name()
				<< " has "
				<< this->get_hitPoints() 
				<< " hit points." 
				<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int	currentEnergy;
	int currentHitPoints;
	
	currentEnergy = this->get_energyPoints();
	currentHitPoints = this->get_hitPoints();
	if (currentEnergy > 0)
	{
		std::cout	<<	"ClapTrap "
					<<	this->get_name()
					<<	" repairs itself "
					<< amount 
					<< " hit points!"
					<< std::endl;
		currentHitPoints += amount;
		this->set_hitPoints(currentHitPoints);
		std::cout 	<< "Now it has " 
					<< this->get_hitPoints() 
					<< " hit points." 
					<< std::endl;
		currentEnergy--;
		this->set_energyPoints(currentEnergy);
		std::cout 	<< "Now you have " 
					<< this->get_energyPoints() 
					<< " energy points." 
					<< std::endl;
	}
	else
	{
		std::cout 	<< "Sorry, you don't have enough energy points to repair yourself!" 
					<< std::endl;
	}
	return ;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & src)
{
	o << src.get_name();
	return(o);
}