/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:59:19 by repinat           #+#    #+#             */
/*   Updated: 2022/12/14 16:17:28 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}


void	Contact::setFirstName(std::string _first_name)
{
	this->First_name = _first_name;
}

void	Contact::setLastName(std::string _last_name)
{
	this->Last_name = _last_name;
}

void	Contact::setNickname(std::string _nickname)
{
	this->Nickname = _nickname;
}

void	Contact::setPhonenumber(std::string _phone_number)
{
	this->Phone_number = _phone_number;
}

void	Contact::setDarkestSecret(std::string _darkest_secret)
{
	this->Darkest_secret = _darkest_secret;
}


std::string	Contact::getFirstName(void)
{
	return this->First_name;
}

std::string	Contact::getLastName(void)
{
	return this->Last_name;
}

std::string	Contact::getNickname(void)
{
	return this->Nickname;
}

std::string	Contact::getPhonenumber(void)
{
	return this->Phone_number;
}

std::string	Contact::getDarkestSecret(void)
{
	return this->Darkest_secret;
}