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

template <typename T>
class MutantStack : public std::stack<T>
{
 public:
	MutantStack<T>() : std::stack<T>() {};
	MutantStack<T>(const MutantStack<T> &model) : std::stack<T>(model) {};
	
	virtual ~MutantStack<T>() {};

	MutantStack<T> & operator= (const MutantStack<T> &copie) {
		std::stack<T>::operator= (copie);
		return *this;};
	
	typedef typename std::deque<T>::iterator		iterator;
	typedef typename std::deque<T>::const_iterator	const_iterator;

	iterator begin() {return this->c.begin();};
	iterator end() {return this->c.end();};
	
	const_iterator begin() const {return this->c.begin();};
	const_iterator end() const {return this->c.end();};

};

// le membre c est le containeur sous jacent a stack donc une deque
// qui comporte des iterateurs.

// typedef typename permet de definir un nouveau type de variable
// en l ocurence le type MutantStack::iterator baser sur std::deque<T>::iterator.

#endif
