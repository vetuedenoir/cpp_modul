/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:21:55 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:21:56 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
 public:
	Dog();
	Dog(const Dog &copie);
	~Dog();
	
	Dog&	operator= (const Dog &model);
	
	void	makeSound () const;
};

#endif
