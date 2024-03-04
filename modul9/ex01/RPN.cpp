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

void	RPN::print_calcule(const std::string &str)
{
	std::stack<int>	st;
	std::istringstream stream(str);
	char	c;
	int		a = 0;

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
					throw ("Error");
				switch (c)
				{
					case '*':
						a = st.top();
					st.pop();
						a *= st.top();
						st.pop();
						st.push(a);
						break ;	
					case '/':
						a = st.top();
						st.pop();
						a /= st.top();
						st.pop();
						st.push(a);
						break ;
					case '+':
						a = st.top();
						st.pop();
						a += st.top();
						st.pop();
						st.push(a);
						break ;
					case '-':
						a = st.top();
						st.pop();
						a -= st.top();
						st.pop();
						st.push(a);
						break ;
					default:
						throw ("Error");
				}
			}
		}
		else
			throw ("Error");
	}
	std::cout << st.top() << std::endl;
}

int	RPN::calcule(const std::string &str)
{
	std::stack<int>	st;
	std::istringstream stream(str);
	char	c;
	int		a = 0;

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
					throw ("Error");
				switch (c)
				{
					case '*':
						a = st.top();
					st.pop();
						a *= st.top();
						st.pop();
						st.push(a);
						break ;	
					case '/':
						a = st.top();
						st.pop();
						a /= st.top();
						st.pop();
						st.push(a);
						break ;
					case '+':
						a = st.top();
						st.pop();
						a += st.top();
						st.pop();
						st.push(a);
						break ;
					case '-':
						a = st.top();
						st.pop();
						a -= st.top();
						st.pop();
						st.push(a);
						break ;
					default:
						throw ("Error");
				}
			}
		}
		else
			throw ("Error");
	}
	return (st.top());
}
