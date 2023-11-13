/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:17:34 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:17:35 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	std::string name;
 public:
 	DiamondTrap ();
 	DiamondTrap (std::string name);
	DiamondTrap (const DiamondTrap &copie);
	~DiamondTrap ();

	DiamondTrap& operator= (const DiamondTrap &model);
	
	void attack(const std::string& target);
	void whoAmI ();
};

#endif

