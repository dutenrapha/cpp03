/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:46:01 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/09 05:06:19 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const & src);
		virtual ~ClapTrap(void);
		ClapTrap & operator=(ClapTrap const & rhs);
		
		virtual const std::string	get_name(void)	const;
		int	get_hitPoints(void)	const;
		int	get_energyPoints(void)	const;
		int	get_attackDamage(void)	const;
		virtual void	set_name(std::string name);
		void	set_hitPoints(int hitPoints);
		void	set_energyPoints(int energyPoints);
		void	set_attackDamage(int attackDamage);

		ClapTrap(std::string	name);
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;	
};

std::ostream & operator<<(std::ostream & o, ClapTrap const & src);

#endif
