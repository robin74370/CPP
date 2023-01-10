/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:33:50 by repinat           #+#    #+#             */
/*   Updated: 2023/01/10 19:58:02 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public :

	//constructeur par default
	Fixed(void);
	//constructeur de recopie
	Fixed(Fixed const &src);
	Fixed(int const _int);
	Fixed(float const _float);
	
	~Fixed(void);
	
	Fixed	&operator=(Fixed const &_src);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	//surcharge op des 6 op de comparaison

	bool	operator>(Fixed const &_src);
	bool	operator<(Fixed const &_src);
	bool	operator>=(Fixed const &_src);
	bool	operator<=(Fixed const &_src);
	bool	operator==(Fixed const &_src);
	bool	operator!=(Fixed const &_src);

	//surcharge des 4 operateur arithmetiques

	Fixed	operator+(Fixed const & _src);
	Fixed	operator-(Fixed const & _src);
	Fixed	operator*(Fixed const & _src);
	Fixed	operator/(Fixed const & _src);

	//surcharge des operateur incr et decr

	Fixed	&operator++(void);
	Fixed	&operator--(void);
	

private:

	int	_fixed;
	static const int	_bits = 8;

};

std::ostream&	operator<<(std::ostream& o, const Fixed& fixed);

#endif