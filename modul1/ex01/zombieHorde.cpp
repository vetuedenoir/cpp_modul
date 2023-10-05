/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:02:09 by kscordel          #+#    #+#             */
/*   Updated: 2023/09/05 18:58:18 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde;
	int		i;

	horde = new Zombie[N];
	if (horde == nullptr)
		return (nullptr);
	for (i=0; i < N; i++)
		horde[i].init(name);
	return horde;
}
