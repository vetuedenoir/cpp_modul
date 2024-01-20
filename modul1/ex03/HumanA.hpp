/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:00:26 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 18:00:27 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string.h>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	const std::string name;
	Weapon&	weapon;
 public:
 	HumanA (const std::string& name , Weapon& a);
	void attack ();
	~HumanA();
};

#endif
