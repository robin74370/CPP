/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:48:46 by repinat           #+#    #+#             */
/*   Updated: 2022/12/27 15:17:35 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Zombie default constructor called" << std::endl;
}

Zombie::Zombie(std::string set_name) : name(set_name)
{
	std::cout << "Zombie " << this->name << " constructor called" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " destructor called" << std::endl;
}

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

void	Zombie::setName(std::string _name)
{
	this->name = _name;
}
