/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:33:33 by repinat           #+#    #+#             */
/*   Updated: 2023/01/12 15:14:00 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//constructeur par defaut
Fixed::Fixed(void) : _fixed(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

//constructeur par copie
Fixed::Fixed(Fixed const &src) : _fixed(src._fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
}

//constructeur entier
Fixed::Fixed(int const _int) : _fixed(_int << this->_bits)
{
	// std::cout << "Int constructor called" << std::endl;
	
}

Fixed::Fixed(float const _float) : _fixed(int(roundf(_float * (1 << this->_bits))))
{
	// std::cout << "Float constructor called" << std::endl;
}

//destructeur
Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

//surcharge d'operateur egal
Fixed	&Fixed::operator=(Fixed const &_src)
{
	// std::cout << "Copy Assignement operator called" << std::endl;
	this->_fixed = _src.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
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

//operateurs de comparaison

bool	Fixed::operator>(Fixed const &_src)
{
	return (this->_fixed > _src._fixed);
}

bool	Fixed::operator<(Fixed const &_src)
{
	return (this->_fixed < _src._fixed);
}

bool	Fixed::operator>=(Fixed const &_src)
{
	return (this->_fixed >= _src._fixed);
}

bool	Fixed::operator<=(Fixed const &_src)
{
	return (this->_fixed <= _src._fixed);
}

bool	Fixed::operator==(Fixed const &_src)
{
	return (this->_fixed == _src._fixed);
}

bool	Fixed::operator!=(Fixed const &_src)
{
	return (this->_fixed != _src._fixed);
}

//operateurs arithmetiques

Fixed	Fixed::operator+(Fixed const & _src)
{
	Fixed tmp;
	
	tmp.setRawBits(this->_fixed + _src._fixed);
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const & _src)
{
	Fixed tmp;
	
	tmp.setRawBits(this->_fixed - _src._fixed);
	return (tmp);
}

Fixed	Fixed::operator*(Fixed const & _src)
{
	Fixed tmp;
	
	tmp.setRawBits(this->_fixed * _src._fixed >> this->_bits);
	return (tmp);
}

Fixed	Fixed::operator/(Fixed const & _src)
{
	Fixed tmp;
	
	tmp.setRawBits(this->_fixed * (1 << this->_bits) / _src._fixed);
	return (tmp);
}

//operateurs incr et decr

Fixed	&Fixed::operator++()
{
	this->_fixed++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++*this;
	return tmp;
}

Fixed	&Fixed::operator--()
{
	this->_fixed--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--*this;
	return tmp;
}

Fixed	& Fixed::min(Fixed & a, Fixed & b)
{
	if (a > b)
		return b;
	else
		return a;
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	if (a._fixed > b._fixed)
		return b;
	else
		return a;
}

Fixed	& Fixed::max(Fixed & a, Fixed & b)
{
	if (a < b)
		return b;
	else
		return a;
}

const	Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	if (a._fixed < b._fixed)
		return b;
	else
		return a;
}




