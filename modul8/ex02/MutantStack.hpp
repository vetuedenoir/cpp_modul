/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:47:00 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/16 21:10:50 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
//#include <deque>

template <typename E>
class MutantStack : public std::stack<E>
{
 public:
	MutantStack<E>() : std::stack<E> () {};
	MutantStack<E>(const MutantStack<E> &model) {*this = model;};
	
	virtual ~MutantStack<E>() {};

	MutantStack<E>&	operator= (const MutantStack<E> &copie){
		std::stack<E>::operator= (copie);
		return *this;
	};
	
	typedef typename std::deque<E>::iterator iterator;
	typedef typename std::deque<E>::const_iterator const_iterator;

	
	iterator	begin() {return this->c.begin();};
	iterator	end() {return this->c.begin();};

	const_iterator	begin() const {return this->d.begin();};
	const_iterator	end() const {return this->d.end();};

};



#endif