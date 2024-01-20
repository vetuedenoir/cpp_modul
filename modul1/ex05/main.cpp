/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:01:46 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 18:01:47 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl harl;

	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("nimp");
	return (0);
}

