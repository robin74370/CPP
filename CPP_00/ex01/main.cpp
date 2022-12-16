/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 01:28:18 by repinat           #+#    #+#             */
/*   Updated: 2022/12/16 15:27:21 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

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

void    search(Phonebook *pb)
{
	int			i;
	int			j;
	int			booleen;
	int			value;
	std::string	command;

	i = 0;
	while (i < (pb->getnb() + 1))
	{
		Contact	contact;
		contact = pb->getContact(i);

		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << print_search(contact.getFirstName()) << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << print_search(contact.getLastName()) << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << print_search(contact.getNickname()) << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << std::endl;
		i++;
	}
	booleen = 0;
	while(1)
	{
		
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(0);
		else if (!ft_isalnum(command))
		{
			std::cout << "Enter a number between 0 and 7" << std::endl;		
			booleen = 1;
		}
		else
			value = std::stoi(command);
		if (value >= 0 && value < (pb->getnb() + 1))
		{
			std::cout << "First name :\t\t";
			std::cout << pb->getContact(value).getFirstName() << std::endl;
			std::cout << "Last name :\t\t";
			std::cout << pb->getContact(value).getLastName() << std::endl;
			std::cout << "Nickname :\t\t";
			std::cout << pb->getContact(value).getNickname() << std::endl;
			std::cout << "Phone number :\t\t";
			std::cout << pb->getContact(value).getPhonenumber() << std::endl;
			std::cout << "Darkest secret :\t";
			std::cout << pb->getContact(value).getDarkestSecret() << std::endl;
			break ;
		}
		else
		{
			if (!booleen)
				std::cout << "Contact not found, try again" << std::endl;
		}
	}
}

void    add(Phonebook *pb)
{
	Contact	contact;
	std::string	str;

	do
	{
		std::cout << "First Name : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);	
	}
	while (str.empty());
	if (std::cin.eof())
		exit(0);	
	contact.setFirstName(str);
	do
	{
		std::cout << "Last Name : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
	}
	while (str.empty());
	if (std::cin.eof())
		exit(0);	
	contact.setLastName(str);
	do
	{
		std::cout << "Nickname : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
	}
	while (str.empty());
	if (std::cin.eof())
		exit(0);	
	contact.setNickname(str);
	do
	{
		std::cout << "Phone Number : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
	}
	while (str.empty());
	if (std::cin.eof())
		exit(0);	
	contact.setPhonenumber(str);
	do
	{
		std::cout << "Darkest Secret : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
	}
	while (str.empty());
	if (std::cin.eof())
		exit(0);	
	contact.setDarkestSecret(str);
	pb->setContact(contact);
}

int main(int ac, char **av)
{
	Phonebook	pb;
	std::string command;
   
	while(1)
	{
		getline(std::cin, command);
		if (command == "ADD")
			add(&pb);
		else if (command == "SEARCH")
			search(&pb);
		else if (command == "EXIT")
			return (0) ;
		else if (std::cin.eof())
			return(0);
	}
}