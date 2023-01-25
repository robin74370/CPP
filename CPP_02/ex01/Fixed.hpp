/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:33:02 by repinat           #+#    #+#             */
/*   Updated: 2023/01/24 13:24:33 by repinat          ###   ########.fr       */
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
	//constructeurs
	Fixed(int const _int);
	Fixed(float const _float);
	//constructeur de recopie
	Fixed(Fixed const &src);
	
	~Fixed(void);
	
	Fixed	&operator=(Fixed const &_src);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	

private:

	int	_fixed;
	static const int	_bits = 8;

};

std::ostream&	operator<<(std::ostream& o, const Fixed& fixed);

#endif