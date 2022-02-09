/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 02:42:03 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/09 04:47:16 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_H
#define DIAMOND_TRAP_H
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const & src);
		~DiamondTrap(void);
		DiamondTrap & operator=(DiamondTrap const & rhs);

		DiamondTrap(std::string name);
		void				set_name(std::string name);
		const std::string	get_name(void)	const;
		void				attack(const std::string& target);
		void				whoAmI(void);
	private:
		std::string		_name;
};

std::ostream & operator<<(std::ostream & o, DiamondTrap const & src);

#endif
