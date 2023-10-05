/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:00:16 by kscordel          #+#    #+#             */
/*   Updated: 2023/09/08 17:15:08 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *\n";
	else
	{
		while (argv[1][i])
		{
			std::cout << (char)toupper(argv[1][i]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
