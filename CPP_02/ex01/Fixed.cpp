/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:33:04 by repinat           #+#    #+#             */
/*   Updated: 2022/11/30 00:19:51 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::_bits = 8;

//constructeur par defaut
Fixed::Fixed(void) : _fixed(0)
{
	std::cout << "Defaut constructor called" << std::endl;
}
//constructeur de recopie
Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	
	*this = src;

	return ;
}

Fixed::Fixed(int const _int)
{
	
}