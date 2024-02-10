/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:47:12 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/10 19:17:57 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <iostream>
#include <algorithm>

template <class T>
void	easyfind(T container, int nb)
{
	try{
		auto x = find(container.cbegin(), container.cend(), nb);
		if (x == container.cend())
			throw (nb);
		else
			std::cout << nb << " is found" << std::endl;
	}
	catch (int e)
	{
		std::cout << e << " is not in the liste" << std::endl;
	}
}


#endif