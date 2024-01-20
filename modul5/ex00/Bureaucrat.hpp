/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:58:22 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 17:58:24 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat
{
	Bureaucrat();
	const std::string	name;
	int					grade;

public:
	Bureaucrat(const std::string n_name, const int n_grade);
	Bureaucrat(const Bureaucrat &copie);
	~Bureaucrat();

	Bureaucrat&	operator= (const Bureaucrat &model);

	std::string	getName() const;
	int			getGrade() const;

	void	setGrade(const int n_grade);
	void	incrementGrade();
	void	decrementeGrade();

	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw() {return "The grade is too high";}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw() {return "The grade is too low";}
	};
};

std::ostream & operator << ( std::ostream &out, const Bureaucrat &b);

#endif

