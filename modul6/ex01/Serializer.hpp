/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:57:12 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/29 20:33:13 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include <string>

typedef struct Data
{
	std::string name;
	int			id;
}		Data;

class Serializer
{
	Serializer();
	Serializer(const Serializer &copie);
	Serializer&	operator= (const Serializer &model);
public:
	~Serializer();
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif
