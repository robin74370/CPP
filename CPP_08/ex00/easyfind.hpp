/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:59:17 by repinat           #+#    #+#             */
/*   Updated: 2023/02/08 10:45:00 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <list>
#include <vector>
#include <exception>
#include <string>
#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception
{
public :
	const char* what() const throw()
	{
		return ("Error ! the element was not found");
	}
};


template <class T>
typename T::iterator easyfind(T& container, int value)
{
	//it est une variable de type iterator contenu dans le conteneur 'T'
	typename T::iterator it;

	//find renvoi soit un pointeur vers l'element trouve ou end() si il ne trouve pas
	it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
		return it;
	else
		throw NotFoundException();
}

#endif