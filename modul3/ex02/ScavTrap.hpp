/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:16:53 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:16:54 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	bool mode;
	ScavTrap ();
 public:
	ScavTrap (std::string name);
	ScavTrap (const ScavTrap &copie);
	~ScavTrap ();

	 ScavTrap& operator= (const ScavTrap &model);
	 
	void attack (const std::string& target);
	void guardGate();
};

#endif
