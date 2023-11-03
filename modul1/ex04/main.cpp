#include "replace.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Prend en entrer 1 fichier et 2 strings\n";
		return (1);
	}
	std::string name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string name_modif = name;
	
	if (!s1[0])
	{
		std::cout << "Ne peut pas remplacer du vide" << std::endl;
		return (1);
	}
	name_modif.append(".replace");
	return (read_and_replace(name, name_modif, s1, s2));
}
