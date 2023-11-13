/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:22:21 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:22:22 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
 public:
	WrongCat();
	WrongCat(const WrongCat &copie);
	~WrongCat();
	
	WrongCat&	operator= (const WrongCat &model);
	
	void	makeSound () const;
};

#endif
