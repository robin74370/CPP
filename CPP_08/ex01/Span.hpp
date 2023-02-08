/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:05:37 by repinat           #+#    #+#             */
/*   Updated: 2023/02/08 11:24:31 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>

class Span
{
public :
	Span();
	Span(const unsigned int _N);
	Span(const Span & other);
	~Span();

	Span	&operator=(const Span & rhs);

	void	addNumber(int _N);
	void	addNumber(std::vector<int>::const_iterator it1, std::vector<int>::const_iterator it2);
	unsigned int		shortestSpan();
	unsigned int		longestSpan() const;

	
	class ContainerIsFull : public std::exception
	{
	public :
		const char* what() const throw()
		{
			return ("Error: Span is full");
		}
	};

	class ContainerIsEmpty : public std::exception
	{
	public :
		const char* what() const throw()
		{
			return ("Error: Too less numbers in Span");
		}
	};

private :

	//nb max d'entiers que peux contenir la classe
	unsigned int N;
	std::vector<int> V;

};

#endif