/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:00:58 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 18:01:00 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "string"

class Weapon
{
	std::string type;
 public:
 	Weapon (std::string type);
	const std::string &getType ();
	void setType (std::string name);
	~Weapon ();
};

#endif
