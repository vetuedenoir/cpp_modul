/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:06:41 by kscordel          #+#    #+#             */
/*   Updated: 2023/09/05 17:34:30 by kscordel         ###   ########.fr       */
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
	Zombie (std::string);
	void announce(void);
    ~Zombie ();
};

 void randomChump( std::string name );
 Zombie* newZombie(std::string name);

#endif
