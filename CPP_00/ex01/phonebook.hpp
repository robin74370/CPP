/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 06:35:51 by repinat           #+#    #+#             */
/*   Updated: 2022/11/14 10:51:10 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>

struct Contact
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

class Phonebook
{
	public:

	Phonebook(void);
//	Phonebook::~Phonebook(void);
	
	void	add(void);
	void	search(void);
	
	int	counter;
	int added_elements;

	Contact contacts[8];
};

Phonebook::Phonebook(void)
{
	this->counter = 0;
}

void	Phonebook::search(void)
{
	return ;
}

void	Phonebook::add(void)
{
	std::string input;
	
	std::cout << "First Name : ";
	std::cin >> input;
	this->contacts[counter].first_name = input;
	std::cout << "Last Name : ";
	std::cin >> input;
	this->contacts[counter].last_name = input;
	std::cout << "Nickname : ";
	std::cin >> input;
	this->contacts[counter].nickname = input;
	std::cout << "Phone Number : ";
	std::cin >> input;
	this->contacts[counter].phone_number = input;
	std::cout << "Darkest Secret : ";
	std::cin >> input;
	this->contacts[counter].darkest_secret = input;
	this->counter++;
	if (this->counter >= 8)
		this->counter = 0;
	this->added_elements++;
}

#endif