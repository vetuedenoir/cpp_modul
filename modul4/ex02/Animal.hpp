/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:23:51 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:23:52 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
 protected:
	std::string type;

 public:
	Animal();
	Animal(const Animal &copie);
	virtual ~Animal();
	
	virtual Animal&	operator= (const Animal &model);
	
	virtual void	makeSound () const = 0;
	std::string	getType () const;
};

#endif

