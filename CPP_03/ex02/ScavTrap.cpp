/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 01:33:04 by repinat           #+#    #+#             */
/*   Updated: 2023/01/24 13:35:51 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" <<std::endl;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
	
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	if (this != &src)
	{
		this->Hit_points = src.Hit_points;
		this->Energy_points = src.Energy_points;
		this->Attack_damage = src.Attack_damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string & target)
{
	std::cout << "ScavTrap " << this->name << " attacks ";
	std::cout << target << ", causing ";
	std::cout << this->Attack_damage << " points of damage !";
	std::cout << std::endl;
	this->Energy_points--;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " ";
	std::cout << "is now in Gate keeper mode !" << std::endl;
}
