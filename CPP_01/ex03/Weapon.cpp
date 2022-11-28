/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:30:09 by repinat           #+#    #+#             */
/*   Updated: 2022/11/28 14:50:56 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//constructeur
Weapon::Weapon(std::string type)
{
	this->_type = type;
}

//destructeur
Weapon::~Weapon(void)
{
}

std::string &Weapon::getType(void)
{
	std::string	&ref = this->_type;
	return (ref);
}

void	Weapon::setType(std::string str)
{
	this->_type = str;
}