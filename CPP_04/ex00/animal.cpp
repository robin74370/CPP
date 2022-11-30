/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:48:59 by repinat           #+#    #+#             */
/*   Updated: 2022/11/30 19:24:20 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

// BEGINNING ALL --ANIMAL-- MUMBERS FUNCTIUNS

Animal::Animal(void) : type("Default")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string _type) : type(type)
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

void	Animal::getType(void)
{
	std::cout << "Type of the Animal is a : " << this->type << std::endl;
}

// BEGINNING ALL --DOG-- MUMBERS FUNCTIUNS

Dog::Dog(void) : Animal(), sound("Barks")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string _type) : Animal(_type), sound("Barks")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;

	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &src)
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

void	Dog::makeSound()
{
	std::cout << this->type << "has " << sound << "!" << std::endl;
}

// BEGINNING ALL --CAT-- MUMBERS FUNCTIUNS


Cat::Cat(void) : Animal(), sound("Meows")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string _type) : Animal(_type), sound("Meows")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;

	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &src)
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

void	Cat::makeSound()
{
	std::cout << this->type << "has " << sound << "!" << std::endl;
}