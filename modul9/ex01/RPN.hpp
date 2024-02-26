/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:52:36 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/26 19:47:32 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>

class RPN
{
	RPN();
	std::stack<char> line;
public:
	RPN(const std::string &str);
	RPN(const RPN &model);
	~RPN();

	RPN&	operator= (const RPN &copie);

	
	
};

#endif