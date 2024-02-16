/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:11:57 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/16 14:36:29 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <stdexcept>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <iterator>


class Span
{
	Span();
	unsigned int	N;
	std::vector <int>	array;
	unsigned int	stock;
public:
	Span(unsigned int N);
	Span(const Span &copie);
	~Span();
	
	Span&	operator= (const Span &model);
	
	void	addNumber(int num);
	long	shortestSpan();
	long	longestSpan();

	int	&operator[](const unsigned int idx);

	template<class IT>
	void	addNumber(IT begin, IT end)
	{
		if (stock == N)
			throw std::out_of_range("Error: Out of range");
		for (IT it = begin; it != end; it++)
		{
			this->addNumber(*it);
		}
	}

	/*template<class T>
	void	addNumber(T container, unsigned int size)
	{
		unsigned int i = 0;
		if (stock + size > N)
			throw std::out_of_range("Error: Out of range");
		while (stock != N && i < size)
		{
			array[stock] = container[i];
			i++;
			stock++; 
		}
	}*/
};

#endif