/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:05:35 by repinat           #+#    #+#             */
/*   Updated: 2023/02/08 14:29:23 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(const unsigned int _N)
	: N(_N)
{
	if (_N < 1)
		throw ContainerIsEmpty();
}

Span::Span(const Span & other)
	: N(other.N), V(other.V)
{
}

Span::~Span()
{
}

Span &Span::operator=(const Span & rhs)
{
	if (this != &rhs)
	{
		this->N = rhs.N;
		this->V = rhs.V;
	}
	return *this;
}

void	Span::addNumber(int _N)
{
	if (this->V.size() >= N)
		throw ContainerIsFull();
	this->V.push_back(_N);
}

void	Span::addNumber(std::vector<int>::const_iterator it1, std::vector<int>::const_iterator it2)
{
	while (it1 < it2)
	{
		if (V.size() == N)
			throw ContainerIsFull();
		V.push_back(*it1);
		++it1;
	}
}

unsigned int	Span::shortestSpan()
{
	
	if (this->V.size() < 2)
		throw ContainerIsEmpty();
	//trier les nombres avec std::sort()
	std::sort(this->V.begin(), this->V.end());
	int shortest = this->V[1] - this->V[0];
	for (int i = 1; i < this->V.size() - 1; i++)
	{
		int span = this->V[i + 1] - this->V[i];
		if (span < shortest)
			shortest = span;
	}
	return shortest;
}

unsigned int	Span::longestSpan() const
{
	int min;
	int	max;

	if (this->V.size() < 2)
		throw ContainerIsEmpty();
	min = this->V[0];
	max = this->V[0];
	for (int i = 1; i < this->V.size(); i++)
	{
		if (V[i] < min)
			min = V[i];
		else if (V[i] > max)
			max = V[i];
	}
	return max - min;
}
