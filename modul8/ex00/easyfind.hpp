/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:47:12 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/22 20:41:02 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <iostream>
#include <algorithm>

template <class T>
size_t	easyfind(T container, int nb)
{
	try{
		typename T::iterator x = std::find(container.begin(), container.end(), nb);
		if (x == container.end())
			throw (nb);
		else
			std::cout << nb << " is found" << std::endl;
		return std::distance(container.begin(), x);
	}
	catch (int e)
	{
		std::cout << e << " is not in the liste" << std::endl;
		return (-1);
	}
}

#endif