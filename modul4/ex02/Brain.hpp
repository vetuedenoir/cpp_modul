#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
#include <iostream>

class Brain
{
	std::string ideas[100];
	int	num;
 public:
 	Brain ();
 	Brain (const Brain &copie);
 	~Brain ();
 	
 	Brain&	operator= (const Brain &model);
 	
 	void	getIdeas(const std::string id);
 	void	retIdeas() const;
};

#endif
