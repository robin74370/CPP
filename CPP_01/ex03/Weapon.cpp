/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:30:09 by repinat           #+#    #+#             */
/*   Updated: 2022/11/23 16:16:05 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::&getType()
{
	std::string	&ref = this->type;
	return (ref);
}

void	Weapon::setType(std::string str)
{
	this->type = str;
}