/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:55:30 by repinat           #+#    #+#             */
/*   Updated: 2022/12/07 21:03:01 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Default")
{
	std::cout << "AMateria default constructor called" << std::endl;
}


AMateria::AMateria(std::string const & type) : 
	_type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
}

std::string	const & AMateria::getType(void) const
{
	return this->_type;
}