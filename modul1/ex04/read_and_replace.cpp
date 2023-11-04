#include "replace.hpp"

std::string	&search_and_replace(std::string &tampon, std::string &s1, std::string &s2)
{
	int	pos = 0;

	while (pos != -1)
	{
		pos = tampon.find(s1, pos);
		if (pos == -1)
			break ;
		tampon.erase(pos, s1.length());
		tampon.insert(pos, s2);
		pos += s2.length();
	}
	return (tampon);
}

int	read_and_replace(std::string name, std::string name_modif ,std::string s1, std::string s2)
{
	std::ifstream	fichier(name.c_str());
	std::string	tampon;

	if (!fichier.is_open())
	{
		std::cerr << "Erreur: impossible d'ouvrir le fichier " << name << "\n";
		return (1);
	}
	std::ofstream fichier_modif (name_modif.c_str());
	if (!fichier_modif.is_open())
	{
		std::cerr << "Erreur: impossible de creer le fichier " << name_modif << "\n";
		fichier.close();
		return (1);
	}
	while (1)
	{
		if (!getline (fichier, tampon))
			break ;
		fichier_modif << search_and_replace(tampon, s1, s2) << "\n";
	}
	fichier.close();	
	fichier_modif.close();
	return (0);
}

