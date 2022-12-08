/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:29:24 by repinat           #+#    #+#             */
/*   Updated: 2022/12/06 12:36:37 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), sound("Barks")
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

void	Dog::makeSound() const
{
	std::cout << this->type << " has " << sound << "!" << std::endl;
}