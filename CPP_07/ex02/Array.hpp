/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:08:34 by repinat           #+#    #+#             */
/*   Updated: 2023/01/19 21:54:17 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
public :

	Array() : size(0), array(new T(0)) {};
	Array(unsigned int n) : array(new T(n)) {};
	Array(const Array& other)
	{
		this->size = other.size;
		this->array = new T[other.size];
		for (int i = 0; i < this->size; i++)
			this->array[i] = other.array[i];
	}
	~Array()
	{
		for (int i = 0; i < size; i++)
			delete this->array[i];
	}
	
	Array&	operator=(const Array& rhs)
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
	T&	operator[](unsigned int index) const;
	{
		if (index >= this->size)
			throw InvalidIndex();
		return this->array[index];
	}
	
	int	size() const;
	{
		return this->size;
	}

	class InvalidIndex : public std::exception
	{
		public :
			const char* what() const throw()
			{
				return ("This index is incorrect, try again");
			}
	}

private :

	T*				array;
	unsigned int	size;
	
};

#endif