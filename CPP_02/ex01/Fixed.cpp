/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:33:04 by repinat           #+#    #+#             */
/*   Updated: 2023/01/10 19:30:39 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

//constructeur entier
Fixed::Fixed(int const _int)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = (_int << this->_bits);
	
}

Fixed::Fixed(float const _float)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = int(roundf(_float * (1 << this->_bits)));
}

//destructeur
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

//surcharge d'operateur egal
Fixed	&Fixed::operator=(Fixed const &_src)
{
	std::cout << "Copy Assignement operator called" << std::endl;
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

//convertit la valeur en virgule fixe en nombre a virgule flottante
float	Fixed::toFloat(void) const
{
	return float(this->_fixed) / (1 << this->_bits);
}

//convertit la valeur en virgule fixe en nombre entier
int	Fixed::toInt(void) const
{
	// return (round(this->_fixed));
	return (this->_fixed >> this->_bits);
}

//surcharge operateur <<
std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return (o);
}