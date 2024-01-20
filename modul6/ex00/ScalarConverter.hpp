/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:56:57 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 19:56:58 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP


class ScalarConverter
{
	ScalarConverter	();
	ScalarConverter	(const ScalarConverter &copie);
	ScalarConverter&	operator= (const ScalarConverter &model);
public:
	~ScalarConverter();

};


#endif