/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:24:16 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:24:17 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <cstdlib>
# include <ctime>
# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	Brain *brain; 
 public:
	Dog();
	Dog(const Dog &copie);
	~Dog();
	
	Dog&	operator= (const Dog &model);
	
	void	makeSound () const;
	void	think ();
	void	displayIdeas() const;
};

#endif
