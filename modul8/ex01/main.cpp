/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:11:42 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/16 14:36:07 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	*create_array(unsigned int size)
{
	srand (time(NULL));
	int *ar = new int[size];

	for (unsigned int i = 0; i < size; i++)
	{
		ar[i] = rand() %INT_MAX;
	}
	return ar;
}

int	main()
{	
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "-------------sujet test---------" << std::endl; 
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\n-------------limit test---------" << std::endl;
	Span limit(3);
	limit.addNumber(INT_MAX);
	limit.addNumber(0);
	limit.addNumber(INT_MIN);
	std::cout << "min range = " << limit.shortestSpan() << std::endl;
	std::cout << "max range = " << limit.longestSpan() << std::endl;


	std::cout << "\n-------------big test whith random array---------" << std::endl;
	unsigned int size = 100000;
	Span	big(size);
	int	*ar = create_array(size);
	
	big.addNumber(ar, ar + size);
	std::cout << "min range = " << big.shortestSpan() << std::endl;
	std::cout << "max range = " << big.longestSpan() << std::endl;
	delete [] ar;

	std::cout << "\n-------------big test whith random vector---------" << std::endl;
	size = 1000;
	Span	vt(size);
	ar = create_array(size);
	std::vector <int> vec(ar, ar + size); 
	
	vt.addNumber(vec.begin(), vec.end());
	std::cout << "min range = " << vt.shortestSpan() << std::endl;
	std::cout << "max range = " << vt.longestSpan() << std::endl;
	delete [] ar;

	//test avec l autre methode addNumber
	/*std::cout << "\n-------------big test whith random array---------" << std::endl;
	unsigned int size = 100000;
	Span	big(size);
	int	*ar = create_array(size);
	
	big.addNumber(ar, size);
	std::cout << "min range = " << big.shortestSpan() << std::endl;
	std::cout << "max range = " << big.longestSpan() << std::endl;
	delete [] ar;

	std::cout << "\n-------------big test whith random vector---------" << std::endl;
	size = 1000;
	Span	vt(size);
	ar = create_array(size * 2);
	std::vector <int> vec(ar, ar + size * 2); 
	
	vt.addNumber(vec, size * 2);
	std::cout << "min range = " << vt.shortestSpan() << std::endl;
	std::cout << "max range = " << vt.longestSpan() << std::endl;
	delete [] ar;*/
	
	return (0);
}