/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:35:28 by repinat           #+#    #+#             */
/*   Updated: 2022/12/16 17:22:23 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
	_name(name), _weapon(weapon)
{
	std::cout <<  "HumanA constructor called" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout <<  "HumanA destructor called" << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType();
	std::cout << std::endl;
}