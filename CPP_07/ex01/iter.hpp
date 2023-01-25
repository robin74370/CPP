/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:38:16 by repinat           #+#    #+#             */
/*   Updated: 2023/01/18 15:03:54 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *tab, int size, void(*ptrfunc)(const T&))
{
	for (int i = 0; i < size; i++)
		(*ptrfunc)(tab[i]);
}

template <typename T>
void	print_t(T &p)
{
	std::cout << p << std::endl;
}

#endif