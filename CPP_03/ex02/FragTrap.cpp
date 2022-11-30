/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:27:34 by repinat           #+#    #+#             */
/*   Updated: 2022/11/30 18:42:20 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;

	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	if (this != &src)
	{
		this->Energy_points = src.Energy_points;
		this->Attack_damage = src.Attack_damage;
		this->Hit_points = src.Hit_points;
	}
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Fragtrap <" << this->name << "> asked for a high five";
	std::cout << std::endl;
}
