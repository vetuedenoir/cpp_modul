/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:23:59 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:24:00 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
