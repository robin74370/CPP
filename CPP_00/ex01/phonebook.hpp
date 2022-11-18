/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:12:19 by repinat           #+#    #+#             */
/*   Updated: 2022/11/18 15:43:19 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string.h>
#include <iomanip>

struct Contact
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

class Phonebook
{
	public:

	Phonebook(void);
//  Phonebook::~Phonebook(void);

	void    add(void);
	void    search(void);

	int counter;
	int added_elements;
	
	private:

	Contact contacts[8];
};

Phonebook::Phonebook(void)
{
	this->counter = 0;
	this->added_elements = 0;
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

int	ft_isalnum(std::string command)
{
	int	i;

	i = 0;
	while (command[i])
	{
		if (!(command[i] >= '0' && command[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

void    Phonebook::search(void)
{
	int			i;
	int			j;
	int			booleen;
	int			value;
	std::string	command;

	i = 0;
	while (i < this->added_elements)
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << print_search(this->contacts[i].first_name) << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << print_search(this->contacts[i].last_name) << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << print_search(this->contacts[i].nickname) << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << std::endl;
		i++;
	}
	
	booleen = 0;
	while(42)
	{
		std::cin >> command;
	//	if (checker que c bien des nombres en entier)
		if (!ft_isalnum(command))
		{
			std::cout << "Contact not found, try again" << std::endl;		
			booleen = 1;
		}
		else
			value = std::stoi(command);
		if (value >= 0 && value < this->added_elements)
		{
			std::cout << "First name :\t\t";
			std::cout << this->contacts[value].first_name << std::endl;
			std::cout << "Last name :\t\t";
			std::cout << this->contacts[value].last_name << std::endl;
			std::cout << "Nickname :\t\t";
			std::cout << this->contacts[value].nickname << std::endl;
			std::cout << "Phone number :\t\t";
			std::cout << this->contacts[value].phone_number << std::endl;
			std::cout << "Darkest secret :\t";
			std::cout << this->contacts[value].darkest_secret << std::endl;
			break ;
		}
		else
		{
			if (!booleen)
				std::cout << "Contact not found, try again" << std::endl;
		}
	}
}

void    Phonebook::add(void)
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