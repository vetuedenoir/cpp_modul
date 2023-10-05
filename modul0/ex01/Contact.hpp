/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:15:46 by kscordel          #+#    #+#             */
/*   Updated: 2023/10/05 18:29:33 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Contact
{
 private:
	std::string prenom;
	std::string nom;
	std::string surnom;
	std::string telephone;
	std::string	darksecret;
 public:
	Contact (void);
	void setcontact (std::string, std::string, std::string, std::string, std::string);
	void affiche (void);
	int	len (std::string);
	std::string ft_substr (std::string str, int d, int f);
	void for_search (int index);
};

#endif