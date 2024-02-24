/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:46:29 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/24 12:50:03 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int	main()
{
	int		nums[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
	double	dd[] = {1.12, 2.55, 3.6, 42.42, 8.8, -898.6};
	char	str[] = "Salut 42";

	std::cout << "array of int" << std::endl;
	::iter(nums, 11, ::print);
	std::cout << "\n--------------------------------------------------\narray of double" << std::endl;
	::iter(dd, 6, ::print);
	std::cout << "\n--------------------------------------------------\narray of char" << std::endl;
	::iter(str, 8, ::print);

	return 0;
}