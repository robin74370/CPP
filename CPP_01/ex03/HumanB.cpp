/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:15:19 by repinat           #+#    #+#             */
/*   Updated: 2022/11/23 16:24:30 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack()
{
	std::cout << this->name << "attacks with their" << this->Weapon->type << std::endl;
}

