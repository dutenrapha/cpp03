/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:27:46 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/09 05:10:06 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public virtual ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const & src);
		virtual ~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & rhs);
		
		ScavTrap(std::string name);
		virtual void attack(const std::string& target);
		void guardGate(void);

	protected:
		static int	__hitPoints;
		static int	__energyPoints;
		static int	__attackDamage;
};

std::ostream & operator<<(std::ostream & o, ScavTrap const & src);

#endif
