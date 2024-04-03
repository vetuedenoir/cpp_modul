/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:52:36 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/27 19:00:53 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
#include <sstream>
#include <exception>

class RPN
{
	RPN();
	RPN(const RPN &model);
	RPN&	operator= (const RPN &copie);
public:
	~RPN();
	static long	calcule(const std::string &str);
	class ParseException : public std::exception {
		public:
		virtual const char* what() const throw() {return "Error";}; 
	};
	
};

#endif