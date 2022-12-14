/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:12:16 by repinat           #+#    #+#             */
/*   Updated: 2022/12/14 17:15:06 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


Phonebook::Phonebook(void)
	: index(0)
{
	std::cout << "Constructor called" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Phonebook::setContact(Contact contact)
{
	this->contacts[this->index] = contact;
	if ((this->counter % 8) == 0)
		this->index = -1;
	this->index++;
	this->counter++;
}

Contact	Phonebook::getContact(int _index) const
{
	return this->contacts[_index];
}

int	Phonebook::getCount(void) const
{
	return this->counter;
}

int Phonebook::counter = 0;