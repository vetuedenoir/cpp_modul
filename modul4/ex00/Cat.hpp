/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:21:36 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:21:37 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
 public:
	Cat();
	Cat(const Cat &copie);
	~Cat();
	
	Cat&	operator= (const Cat &model);
	
	void	makeSound () const;
};

#endif
