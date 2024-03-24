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

int	RPN::calcule(const std::string &str)
{
	std::stack<int>	st;
	std::istringstream stream(str);
	char	c;
	int		a = 0;
	int		b = 0;

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
				switch (c)
				{
					case '*':
						a = st.top();
						st.pop();
						b = st.top();
						st.pop();
						b *= a;
						st.push(b);
						break ;	
					case '/':
						a = st.top();
						if (a == 0)
							throw ParseException();
						st.pop();
						b = st.top();
						st.pop();
						b /= a;
						st.push(b);
						break ;
					case '+':
						a = st.top();
						st.pop();
						b = st.top();
						st.pop();
						b += a;
						st.push(b);
						break ;
					case '-':
						a = st.top();
						st.pop();
						b = st.top();
						st.pop();
						b -= a;
						st.push(b);
						break ;
					default:
						throw ParseException();
				}
			}
		}
		else
			throw ParseException();
	}
	return (st.top());
}
