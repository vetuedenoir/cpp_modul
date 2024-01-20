/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:01:42 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 18:01:43 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
private:

typedef struct s_stpt
{
	std::string	name;
	void (Harl::*Fonc_ptr)();
}	t_stpt;

	t_stpt tab[4];
	void debug ();
	void info ();
	void warning ();
	void error ();
 public:
 	Harl (void);
 	void complain (std::string level);
};

#endif
