/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:25:07 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:25:08 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
 public:
 	Cure (std::string const &type);
	Cure ();
	Cure (const Cure &copie);
	~Cure ();

	Cure&	operator= (const Cure &model);
 
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif
