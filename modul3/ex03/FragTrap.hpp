/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:17:54 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:17:55 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
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
