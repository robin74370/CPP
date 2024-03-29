/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:34:30 by repinat           #+#    #+#             */
/*   Updated: 2023/01/25 15:34:39 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed const c(Fixed(6) + Fixed(4));
	Fixed const d(Fixed(5) - Fixed(2));
	Fixed const e(Fixed(5) / Fixed(2));

	// ++i et i++
	// peut remplacer par --
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	//op *
	std::cout << b << std::endl;
	
	//min et max
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	
	//op +
	std::cout << c << std::endl;
	//op -
	std::cout << d << std::endl;
	//op /
	std::cout << e << std::endl;

	//op >
	Fixed x(5.5f);
	int	z;
	
	if (x > d)
		z = 1;
	else
		z = 0;
	std::cout << z << std::endl;
	
	return 0;
}