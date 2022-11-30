/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:47:04 by repinat           #+#    #+#             */
/*   Updated: 2022/11/29 23:30:17 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public :

	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);
	
	Fixed	&operator=(Fixed const &_src);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int	_fixed;
	static int	_bits;

};



#endif