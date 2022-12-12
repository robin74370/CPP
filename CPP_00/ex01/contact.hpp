/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:59:21 by repinat           #+#    #+#             */
/*   Updated: 2022/12/12 16:37:57 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
public:
	
	Contact(void);
	~Contact(void);

	//setters
	void	setFirstName(std::string _first_name);
	void	setLastName(std::string _last_name);
	void	setNickname(std::string _nickname);
	void	setPhonenumber(std::string _phone_number);
	void	setDarkestSecret(std::string _darkest_secret);

	//getters
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
	std::string	getPhonenumber(void);
	std::string	getDarkestSecret(void);
	
private:
	
	std::string	First_name;
	std::string	Last_name;
	std::string	Nickname;
	std::string	Phone_number;
	std::string	Darkest_secret;
};



#endif