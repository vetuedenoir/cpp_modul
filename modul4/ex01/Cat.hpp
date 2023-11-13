/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:23:10 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:23:11 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <cstdlib>
# include <ctime>
# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	Brain *brain;
 public:
	Cat();
	Cat(const Cat &copie);
	~Cat();
	
	Cat&	operator= (const Cat &model);
	
	void	makeSound () const;
	void	think ();
	void	displayIdeas() const;
};

#endif
