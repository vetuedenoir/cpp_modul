#include "replace.hpp"

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
		if (tampon.compare(s1) == 0)
			fichier_modif << s2 << "\n";
		else
			fichier_modif << tampon << "\n";
	}
	fichier.close();
	fichier_modif.close();
	return (0);
}
