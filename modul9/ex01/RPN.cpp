/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:20:48 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/27 18:59:56 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &model)
{
	*this = model;
}

RPN&	RPN::operator= (const RPN &copie)
{
	(void)copie;
	return *this;
}

void	print_stack(std::stack<int> st)
{
	while (!st.empty())
	{
		std::cout << ' ' << st.top();
		st.pop();
	}
	std::cout << std::endl;
}

long	RPN::calcule(const std::string &str)
{
	std::stack<long>	st;
	std::istringstream stream(str);
	char	c;
	long	a = 0;
	long	b = 0;

	while (stream.get(c))
	{
		if (c == ' ')
			continue ;
		if (stream.peek() == ' ' || stream.peek() == -1)
		{
			if (isdigit(c))
				st.push(atoi(&c));
			else
			{	
				if (st.size() < 2)
					throw ParseException();
				a = st.top();
				st.pop();
				b = st.top();
				st.pop();
				switch (c)
				{
					case '*':				
						b *= a;
						break ;	
					case '/':
						if (a == 0)
							throw ParseException();
						b /= a;
						break ;
					case '+':
						b += a;
						break ;
					case '-':
						b -= a;
						break ;
					default:
						throw ParseException();
				}
				st.push(b);
			}
		}
		else
			throw ParseException();
	}
	if (st.empty())
		throw ParseException();
	return (st.top());
}
