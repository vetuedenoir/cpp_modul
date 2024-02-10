/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:46:25 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/10 14:46:26 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <class T>
void	print(T arg)
{
	std::cout << arg << std::endl;
}

template <class T>
void	iter(T *array, int size, void (*f)(T element))
{
	int	i;

	for (i = 0; i < size; i++)
		f(array[i]);
}


#endif