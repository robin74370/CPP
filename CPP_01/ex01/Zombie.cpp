/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:48:46 by repinat           #+#    #+#             */
/*   Updated: 2022/12/11 15:08:42 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie	*new_Zombie;
	
	new_Zombie = new Zombie(name);
	
	return (new_Zombie);
}

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
