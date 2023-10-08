#include "replace.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "prend en entrer 1  fichier et 2 strings pas plus\n";
		return (1);
	}
	std::string name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string name_modif = name;
	
	name_modif.append(".replace");
	return (read_and_replace(name, name_modif, s1, s2));
}
