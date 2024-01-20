/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:02:06 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 18:02:07 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl harl;
	if (argc == 1)
	{
		harl.complain("DEBUG");
		return (0);
	}
	if (argc > 2)
	{
		std::cerr << "to many arguments\n";
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
