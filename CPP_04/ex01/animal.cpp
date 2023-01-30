/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:48:59 by repinat           #+#    #+#             */
/*   Updated: 2023/01/30 14:03:37 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal(void) : type("Default")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string _type) : type(_type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;

	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << this->type << " has made a sound !" << std::endl;
}
