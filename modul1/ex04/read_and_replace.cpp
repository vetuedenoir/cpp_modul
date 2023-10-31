#include "replace.hpp"

std::string	search_and_replace(std::string &tampon, std::string &s1, std::string &s2)
{
	size_t	pos = 0;
	std::string new_str;

	while (pos != -1)
	{
		pos = tampon.find(s1, pos);
		if (pos == -1)
			break ;
		//ajouter la substring de tampon jusqu a pos et ajouter s2 apres pos
		//avec substring et append

	}
}

int	read_and_replace(std::string name, std::string name_modif ,std::string s1, std::string s2)
{
	std::ifstream	fichier (name);
	std::string	tampon;

	if (!fichier.is_open())
	{
		std::cerr << "Erreur: impossible d'ouvrir le fichier " << name << "\n";
		return (1);
	}
	std::ofstream fichier_modif (name_modif);
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
		if (tampon.find(s1) == 0)
			fichier_modif << search_and_replace(tampon, s1, s2) << "\n";
		else
			fichier_modif << tampon << "\n";
	}
	fichier.close();
	fichier_modif.close();
	return (0);
}
