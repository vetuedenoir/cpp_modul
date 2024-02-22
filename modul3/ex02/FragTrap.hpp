/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:16:32 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:16:33 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	FragTrap ();
 public:
	FragTrap (std::string &name);
	FragTrap (const FragTrap &copie);
	~FragTrap ();

	FragTrap& operator= (const FragTrap &model);
	
	void attack (const std::string& target);
	void highFivesGuys ();
};

#endif
