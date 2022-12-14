/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 01:28:18 by repinat           #+#    #+#             */
/*   Updated: 2022/12/13 16:19:45 by repinat          ###   ########.fr       */
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
	while (i < pb->getCount())
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << print_search(pb->getContact(i).getFirstName()) << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << print_search(pb->getContact(i).getLastName()) << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << print_search(pb->getContact(i).getNickname()) << "|";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << std::endl;
		i++;
	}
	
	booleen = 0;
	while(42)
	{
		std::cin >> command;
		if (!ft_isalnum(command))
		{
			std::cout << "Contact not found, try again" << std::endl;		
			booleen = 1;
		}
		else
			value = std::stoi(command);
		if (value >= 0 && value < pb->getCount())
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

	std::cout << "First Name : ";
	std::getline(std::cin, str);
	contact.setFirstName(str);
	std::cout << "Last Name : ";
	std::getline(std::cin, str);
	contact.setLastName(str);
	std::cout << "Nickname : ";
	std::getline(std::cin, str);
	contact.setNickname(str);
	std::cout << "Phone Number : ";
	std::getline(std::cin, str);
	contact.setPhonenumber(str);
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, str);
	contact.setDarkestSecret(str);
	pb->incrCounter();
	if (pb->incrCounter() >= 8)
		pb->incrCounter() = 0;
	pb->;
}

int main(int ac, char **av)
{
	Phonebook   pb;
	std::string command;
   
	while(42)
	{
		std::cin >> command;
		if (command == "ADD")
			pb.add();
		else if (command == "SEARCH")
			pb.search();
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "Wrong input, try again" << std::endl;
	}

	return (0);
}