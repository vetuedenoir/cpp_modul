#include "Brain.hpp"

Brain::Brain () : num(0)
{
	std::cout << "constructeur Brain" << std::endl;
}

Brain::Brain (const Brain &copie)
{
	std::cout << "constructeur copie Brain" << std::endl;
	*this = copie;
}

Brain::~Brain ()
{
	std::cout << "destructeur Brain" << std::endl;
}
 	
Brain& Brain::operator= (const Brain &model)
{
	int i = -1;
	
	num = model.num;
	while (++i < 100)
		ideas[i] = model.ideas[i];
	return *this;
}
 	
void	Brain::getIdeas(const std::string id)
{
	if (num < 100)
	{
		ideas[num] = id;
		num++;
	}
}

void	Brain::retIdeas() const
{
	int i = -1;
	
	while (++i < num)
		std::cout << ideas[i] << std::endl;
}

