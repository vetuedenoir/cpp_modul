/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:00:39 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 18:00:40 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB 
{
private:
	const std::string name;
	Weapon *weapon;
 public:
 	HumanB (const std::string name);
	void setWeapon(Weapon &weapon);
	void attack ();
	~HumanB ();
};

#endif

