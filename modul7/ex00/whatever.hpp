/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:46:18 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/10 14:51:09 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP


template <class T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <class T>
T	&min(T &a, T &b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <class T>
T	&max(T &a, T &b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif