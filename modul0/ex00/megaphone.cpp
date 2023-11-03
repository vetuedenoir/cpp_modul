/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:00:16 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/02 16:50:46 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(int argc, char *argv[])
{
	int	i;
	int x = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *\n";
	else
	{
		while (x < argc)
		{
			i = 0;
			while (argv[x][i])
			{
				std::cout << (char)toupper(argv[x][i]);
				i++;
			}
			x++;
		}
		std::cout << std::endl;
	}
	return (0);
}
