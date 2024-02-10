/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:47:17 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/10 19:19:21 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int	main()
{
	//size = 13;
	int	myint[] = {5, 8, 7, 99, -8000, 42, 77, 94, -12, 0, 512, 77, -1};
	std::vector<int> vc (myint, myint + sizeof(myint) / sizeof(int));
	std::list<int> ls (myint, myint + sizeof(myint) / sizeof(int));
	easyfind(vc, 654665);
	easyfind(ls, 42);
	return 0;
}