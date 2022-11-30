/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:33:02 by repinat           #+#    #+#             */
/*   Updated: 2022/11/29 23:45:20 by repinat          ###   ########.fr       */
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

	

private:

	int	_fixed;
	static int	_bits;

};

#endif