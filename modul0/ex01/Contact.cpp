/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:29:18 by kscordel          #+#    #+#             */
/*   Updated: 2023/10/05 18:23:41 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact ()
{
    prenom = "";
    nom = "";
    surnom = "";
    telephone = "";
    darksecret = "";
}

void    Contact::setcontact  (std::string name, std::string fname, std::string sname, std::string  num,\
    std::string dark)
{
    prenom = name;
    nom = fname;
    surnom = sname;
    telephone = num;
    darksecret = dark;
}

void    Contact::affiche (void)
{
    std::cout << "- prenom: " << prenom << "\n";
    std::cout << "- nom: " << nom << "\n";
    std::cout << "- surnom: " << surnom << "\n";
    std::cout << "- telephone: " << telephone << "\n";
    std::cout << "- darkest_secret: " << darksecret << "\n\n";
}

int Contact::len (std::string str)
{
	if (prenom.compare(str) == 0)
        return (prenom.length());
	if (nom.compare(str) == 0)
		return (nom.length());
	if (surnom.compare(str) == 0)
		return (surnom.length());
	if (telephone.compare(str) == 0)
		return (telephone.length());
	if (darksecret.compare(str) == 0)
		return (darksecret.length());
	return (0);
}

std::string	Contact::ft_substr(std::string str, int d, int f)
{
	if (prenom.compare(str) == 0)
		return (prenom.substr(d, f));
	if (nom.compare(str) == 0)
		return (nom.substr(d, f));
	if (surnom.compare(str) == 0)
		return (surnom.substr(d, f));
	if (telephone.compare(str) == 0)
		return (telephone.substr(d, f));
	if (darksecret.compare(str) == 0)
		return (darksecret.substr(d, f));
	return ("");
}

void    Contact::for_search(int index)
{
    int len;
    
    std::cout << index << "         |";
		len = prenom.length();
		if (len > 10)
			std::cout << prenom.substr(0, 9) << ".|";
		else
		{
			std::cout << prenom.substr(0, 10);
			while (len++ < 10)
				std::cout << " ";
			std::cout << "|";
		}
		len = nom.length();
		if (len > 10)
			std::cout << nom.substr(0, 9) << ".|";
		else
		{
			std::cout << nom.substr(0, 10);
			while (len++ < 10)
				std::cout << " ";
			std::cout << "|";
		}
		len = surnom.length();
		if (len > 10)
			std::cout << surnom.substr(0, 9) << ".|";
		else
		{
			std::cout << surnom.substr(0, 10);
			while (len++ < 10)
				std::cout << " ";
			std::cout << "|";
		}
}
