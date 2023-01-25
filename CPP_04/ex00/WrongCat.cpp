/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:38:26 by repinat           #+#    #+#             */
/*   Updated: 2022/12/08 16:02:25 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal(), sound("Meows")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;

	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &src)
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << this->type << " has " << sound << "! (WrongAnimal)" << std::endl;
}