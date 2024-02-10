/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:46:46 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/10 14:46:47 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
#include <iostream>

template <class T>
class Array
{
	T				*ar;
	unsigned int	len;
 public:
	Array() {ar = new T[0]; len = 0;};
	Array(unsigned int n) : len(n) {ar = new T [n];};
	Array(const Array &copie) {ar = new T[0]; len = 0; *this = copie;};

	Array	&operator=(const Array &model)
	{
		delete[] ar;
		this->len = model.len;
		ar = new T[len];
		for (unsigned int i = 0; i < len; i++)
			ar[i] = model.ar[i];
		return *this;
	};

	~Array() {delete[] ar;};

	T	&operator[](const unsigned int idx)
	{
		if (idx >= len)
			throw OutOfBoundsExeption();
		return (ar[idx]);	
	};

	//const T	&operator[](const unsigned int idx) const;

	class OutOfBoundsExeption : public std::exception
	{
		public:
			const char *what() const throw() {return "index is out of bounds";};
	};

	unsigned int	size() {return len;};


};

#endif