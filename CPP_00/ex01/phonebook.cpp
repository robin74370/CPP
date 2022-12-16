/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:12:16 by repinat           #+#    #+#             */
/*   Updated: 2022/12/16 15:07:55 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


Phonebook::Phonebook(void)
	: nb(-1), counter(0)
{
}

Phonebook::~Phonebook(void)
{
}

void	Phonebook::setContact(Contact contact)
{	
	this->contacts[this->counter] = contact;
	if (this->counter == 7)
		this->counter = -1;
	if (this->nb != 7)
		this->nb++;
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

int	Phonebook::getnb(void) const
{
	return (this->nb);
}