/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:47:11 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/27 19:10:36 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av, char **envp)
{
	(void)envp;
	if (ac != 2)
	{
		std::cerr << "Ce programme prend 1 operation en argument" << std::endl;
		return 1;
	}
	try
	{
		std::cout << RPN::calcule(av[1]) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}