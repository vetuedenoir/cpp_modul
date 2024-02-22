/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:14:33 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:14:34 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
 protected:
 	ClapTrap ();
 	std::string name;
	unsigned int	hitPoints;
	unsigned int	energiePoints;
	unsigned int	attackDamage;
 public:
 	ClapTrap (const std::string &name);
	ClapTrap (const ClapTrap &copie);
	~ClapTrap ();
	
	ClapTrap& operator= (const ClapTrap &model);

	void attack(const std::string& target);
	void takeDamage (unsigned int amount);
	void beRepaired (unsigned int amount);

	std::string  retName () const;
	unsigned int retHit () const;
	unsigned int retEnergie () const;
	unsigned int retAtkDmg () const;
};

#endif
