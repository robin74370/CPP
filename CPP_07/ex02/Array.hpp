/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:08:34 by repinat           #+#    #+#             */
/*   Updated: 2023/02/02 13:38:47 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include "Array.tpp"

template <typename T>
class Array
{
public :

	Array();
	Array(unsigned int n);
	Array(const Array& other);
	~Array();
	
	Array&	operator=(const Array& rhs);
	T&	operator[](unsigned int index) const;
	
	unsigned int	size() const;

	class InvalidIndex : public std::exception
	{
		public :
			const char* what() const throw()
			{
				return ("This index is incorrect, try again");
			}
	};

private :

	T*				array;
	unsigned int	size;
	
};


#endif