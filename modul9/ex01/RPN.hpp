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

class RPN
{
	RPN();
	RPN(const RPN &model);
	RPN&	operator= (const RPN &copie);
	//std::stack<char> line;
public:
	~RPN();
	static void	print_calcule(const std::string &str);
	static int	calcule(const std::string &str);
	
};

#endif