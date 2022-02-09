/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 02:05:22 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/09 02:31:56 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(FragTrap const & src);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const & rhs);
		
		FragTrap(std::string name);
		void attack(const std::string& target);
		void highFivesGuys(void);
	private:

};

std::ostream & operator<<(std::ostream & o, FragTrap const & src);

#endif
