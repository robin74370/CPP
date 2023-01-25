/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 01:32:40 by repinat           #+#    #+#             */
/*   Updated: 2023/01/24 13:38:08 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("default"), Hit_points(10), 
Energy_points(10), Attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : name(_name), Hit_points(10), 
Energy_points(10), Attack_damage(0)
{
	std::cout << "constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) : name(src.name), Hit_points(src.Hit_points), 
Energy_points(src.Energy_points), Attack_damage(src.Attack_damage)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	if (this != &src)
	{
		this->Hit_points = src.Hit_points;
		this->Energy_points = src.Energy_points;
		this->Attack_damage = src.Attack_damage;
	}
	
	return (*this);
}

void	ClapTrap::attack(const std::string & target)
{
	std::cout << "ClapTrap " << this->name << " attacks ";
	std::cout << target << ", causing ";
	std::cout << this->Attack_damage << " points of damage !";
	std::cout << std::endl;
	this->Energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->Hit_points -= (int)amount;
	std::cout << "ClapTrap " << this->name << " took ";
	std::cout << amount << " points of damages. ";
	std::cout << "New amount of PV is now " << this->Hit_points;
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->Energy_points--;
	this->Hit_points += (int)amount;
	std::cout << "ClapTrap " << this->name << " took a potion ! ";
	std::cout << amount << " points recovered. ";
	std::cout << "New amount of PV is now " << this->Hit_points;
	std::cout << std::endl;
}
