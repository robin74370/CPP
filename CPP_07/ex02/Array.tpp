/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:24:32 by repinat           #+#    #+#             */
/*   Updated: 2023/02/02 13:39:29 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array::Array() : size(0), array(new T(0))
{
}

template <typename T>
Array::Array(unsigned int n): array(new T(n))
{
}

template <typename T>
Array::Array(const Array& other)
{
	this->size = other.size;
	this->array = new T[other.size];
	for (int i = 0; i < this->size; i++)
		this->array[i] = other.array[i];
}

template <typename T>
Array::~Array()
{
	for (int i = 0; i < size; i++)
		delete this->array[i];
}

template <typename T>
Array&	Array::operator=(const Array& rhs)
{
	if (this != &rhs)
	{
		this->~Array();
		this->size = rhs.size;
		this->array = new T[rhs.size];
		for (int i = 0; i < rhs.size; i++)
			this->array[i] = rhs.array[i];
	}
	return *this;
}

template <typename T>
T&	Array::operator[](unsigned int index) const
{
	if (index >= this->size)
		throw InvalidIndex();
	return this->array[index];
}

unsigned int	Array::size() const
{
	return this->size;
}
#endif