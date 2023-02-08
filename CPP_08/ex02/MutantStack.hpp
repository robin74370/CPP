/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:10:41 by repinat           #+#    #+#             */
/*   Updated: 2023/02/08 15:19:32 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <deque>
#include <stack>

template <typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
public :

	MutantStack() {}
	MutantStack(const MutantStack<T, Container>& other)
	{
		*this = other;
		return ;
	}
	virtual ~MutantStack(){}

	MutantStack<T, Container>&	operator=(const MutantStack<T, Container>& rhs){
		if (this != rhs)
			this->MutantStack<T, Container>::stack::operator=(rhs);
		return *this;
	}

	typedef typename Container::iterator iterator;
	typedef typename Container::reverse_iterator reverse_iterator;

	iterator	begin() { return this->c.begin(); }
	iterator	end() { return this->c.end(); }
	reverse_iterator	rbegin() { return this->c.rbegin(); }
	reverse_iterator	rend() { return this->c.rend(); }
};

#endif