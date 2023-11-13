/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:24:57 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:24:58 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
# define Character_HPP

# include <string>
# include <iostream>

#include "ICharacter.hpp"

class Character : public ICharacter
{
	AMateria	*inventaire[4];
	int			charge;
	std::string	name;

 public:
	Character (std::string name);
	//Character (char *str);
	Character (const Character &copy);
	~Character();

	Character& operator= (const Character &model);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
