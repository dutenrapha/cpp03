/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 02:05:22 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/09 05:09:32 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(FragTrap const & src);
		virtual ~FragTrap(void);
		FragTrap & operator=(FragTrap const & rhs);
		
		FragTrap(std::string name);
		void attack(const std::string& target);
		void highFivesGuys(void);

	protected:
		static int	__hitPoints;
		static int	__energyPoints;
		static int	__attackDamage;
};

std::ostream & operator<<(std::ostream & o, FragTrap const & src);

#endif
