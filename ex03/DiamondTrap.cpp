/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 02:42:09 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/09 05:11:14 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::set_name("");
	this->set_name("");
	this->set_hitPoints(FragTrap::__hitPoints);
	this->set_energyPoints(ScavTrap::__energyPoints);
	this->set_attackDamage(FragTrap::__attackDamage);
	std::cout << "DiamondTrap no named was born!" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap "<< this->get_name() <<" has die!" << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
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

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::set_name(name + "_clap_name");
	this->set_name(name);
	this->set_hitPoints(FragTrap::__hitPoints);
	this->set_energyPoints(ScavTrap::__energyPoints);
	this->set_attackDamage(FragTrap::__attackDamage);
	std::cout << "DiamondTrap " << this->get_name() << " was born!" << std::endl;
	return ;
}

void				DiamondTrap::set_name(std::string name)
{
	this->_name = name;
}

const std::string	DiamondTrap::get_name(void)	const
{
	return (this->_name);
}

void				DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << this->get_name() << " ClapTrap name: " << ClapTrap::get_name() << std::endl;
}

std::ostream & operator<<(std::ostream & o, DiamondTrap const & src)
{
	o	<< "DiamondTrap name: "
		<< src.get_name()
		<< std::endl;
	return (o);
}
