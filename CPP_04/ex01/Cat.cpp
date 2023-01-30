/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:29:16 by repinat           #+#    #+#             */
/*   Updated: 2023/01/30 14:11:39 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), sound("Meows")//, brain(new Brain())
{
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
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
	delete this->brain;
}

Cat	&Cat::operator=(Cat const &src)
{
	if (this != &src)
	{
		this->type = src.type;
		this->brain = new Brain(*src.brain);
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << this->type << " has " << sound << "!" << std::endl;
}