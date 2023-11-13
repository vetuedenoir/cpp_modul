/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:25:20 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:25:21 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
 public:
 	Ice (std::string const &type);
	Ice ();
	Ice (const Ice &copie);
	~Ice ();

	Ice&	operator= (const Ice &model);
 
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif
