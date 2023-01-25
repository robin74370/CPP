/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:24:27 by repinat           #+#    #+#             */
/*   Updated: 2023/01/18 14:36:29 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	&min(T& a, T& b)
{
	if (a < b)
		return a;
	else if (a > b)
		return b;
	else
		return b;
}

template <typename T>
T	&max(T& a, T &b)
{
	if (a > b)
		return a;
	else if (a < b)
		return b;
	else
		return b;
}


#endif