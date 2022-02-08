/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:45:31 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/08 16:38:56 by rdutenke         ###   ########.fr       */
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
	std::cout << target << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << amount << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << amount << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & src)
{
	o << src.get_name();
	return(o);
}