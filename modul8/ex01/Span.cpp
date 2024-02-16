/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:11:53 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/16 14:02:25 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0), stock(0) {}

Span::Span(unsigned int N) : N(N), stock(0)
{
	array.resize(N);
}

Span::Span(const Span &copie)
{
	*this = copie;
}

Span::~Span() {}

Span&	Span::operator=(const Span &model)
{
	N = model.N;
	stock = model.stock;
	array = model.array;
	return *this;
}

int	&Span::operator[](const unsigned int idx)
{
	if (idx >= N)
		throw std::out_of_range("Error: Out of range");
	return (array[idx]);	
}

void	Span::addNumber(int num)
{
	if (stock == N)
		throw std::out_of_range("Error: Out of range");
	array[stock] = num;
	stock++;
}

long	Span::shortestSpan()
{
	long diff = (long)INT_MAX - (long)INT_MIN;

	if (stock < 2)
		throw std::logic_error("Error: number of elements < 2");
	std::vector <int> x(array);
	std::sort(x.begin(), x.begin() + stock);
	for (unsigned int i = 0; i < stock - 1; i++)
	{
		if ((long)x[i + 1] - (long)x[i] < diff)
			diff = (long)x[i + 1] - (long)x[i];
	}
	return diff;
}

long	Span::longestSpan()
{
	int	min = INT_MAX;
	int	max = INT_MIN;
	
	if (stock < 2)
		throw std::logic_error("Error: number of elements < 2");
	for (unsigned int i = 0; i < stock; i++)
	{
		if (array[i] < min)
			min = array[i];
		if (array[i] > max)
			max = array[i];
	}
	return ((long)max - (long)min);
}

