/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:12:16 by repinat           #+#    #+#             */
/*   Updated: 2022/12/12 16:51:08 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
	: counter(0), index(0)
{
	std::cout << "Constructor called" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::string	print_search(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		return (str.append("."));
	}
	else
		return (str);
}

void	Phonebook::setContact(Contact contact)
{
	this->contacts[this->index] = contact;
}

Contact	Phonebook::getContact(int index) const
{
	return this->contacts[this->index];
}

int	Phonebook::getCount(void) const
{
	return this->counter;
}
