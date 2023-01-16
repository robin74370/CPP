/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:30:09 by repinat           #+#    #+#             */
/*   Updated: 2022/12/27 15:23:40 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//constructeur
Weapon::Weapon(std::string _type)
{
	this->type = type;
}

//destructeur
Weapon::~Weapon(void)
{
}

const std::string &Weapon::getType(void)
{
	std::string	&ref = this->type;
	return (ref);
}

void	Weapon::setType(std::string str)
{
	this->type = str;
}