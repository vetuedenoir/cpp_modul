/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:25:22 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/29 20:34:08 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main()
{
	Data px;
	Data *pz;
	uintptr_t	ptr;

	px.id = 42;
	px.name = "legende";
	ptr = Serializer::serialize(&px);
	pz = Serializer::deserialize(ptr);
	std::cout << "id "<< pz->id << std::endl;
	std::cout << "name "<< pz->name << std::endl;
	return (0);
}