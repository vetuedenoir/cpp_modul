/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:06:41 by kscordel          #+#    #+#             */
/*   Updated: 2023/09/05 18:45:27 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>


class Zombie
{
	std::string nom;
 public:
	Zombie (void);
	Zombie (std::string);
	void init(std::string name);
	void announce(void);
    ~Zombie ();
};

Zombie* zombieHorde( int N, std::string name );

#endif
