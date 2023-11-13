/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:22:11 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:22:12 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
 protected:
	std::string type;

 public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copie);
	~WrongAnimal();
	
	WrongAnimal&	operator= (const WrongAnimal &model);
	
	void	makeSound () const;
	std::string	getType () const;
};

#endif
