/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:15:07 by repinat           #+#    #+#             */
/*   Updated: 2022/12/11 15:07:24 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string set_name) : name(set_name)
{
	std::cout << "Zombie <" << this->name << "> constructor called" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie <" << this->name << "> destructor called" << std::endl;
}