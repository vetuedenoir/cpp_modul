/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:55:16 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 17:55:17 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public AForm
{
	RobotomyRequestForm();
	std::string	target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &copie);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator= (const RobotomyRequestForm &model);

	std::string	getTarget();

	void	execute(const Bureaucrat &executor) const;

};

#endif