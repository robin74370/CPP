/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:10:41 by repinat           #+#    #+#             */
/*   Updated: 2023/01/24 17:32:33 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template <typename T>
class MutantStack : public std::stack<T>
{
public :

	MutantStack();
	MutantStack(const MutantStack<T>& other);
	~MutantStack();

	MutantStack<T>&	operator=(const MutantStack<T>& rhs);
	

private :

};

#include "MutantStack.tpp"

#endif