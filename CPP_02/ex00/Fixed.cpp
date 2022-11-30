/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:47:01 by repinat           #+#    #+#             */
/*   Updated: 2022/11/29 23:30:22 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::_bits = 8;

//constructeur par defaut
Fixed::Fixed(void) : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

//constructeur par copie
Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

//destructeur
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

//surcharge d'operateur egal
Fixed	&Fixed::operator=(Fixed const &_src)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &_src)
		this->_fixed = _src.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed = raw;
}