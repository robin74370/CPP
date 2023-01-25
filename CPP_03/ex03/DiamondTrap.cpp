/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:35:56 by repinat           #+#    #+#             */
/*   Updated: 2023/01/24 13:38:15 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
	: ClapTrap("clap_name"), ScavTrap(), FragTrap(), name("default")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name)
	: ClapTrap(_name + "_clap_name"), ScavTrap(), FragTrap(), name(_name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;

	this->Hit_points = FragTrap::Hit_points;
	this->Energy_points = ScavTrap::Energy_points;
	this->Attack_damage = FragTrap::Attack_damage;

	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;

	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &src)
{
	if (this != &src)
	{
		this->Energy_points = src.Energy_points;
		this->Attack_damage = src.Attack_damage;
		this->Hit_points = src.Hit_points;
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string & target)
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My DiamondTrap name is " << this->name;
	std::cout << " and my ClapTrap name is " << this->ClapTrap::name;
	std::cout << "" << std::endl;
}
