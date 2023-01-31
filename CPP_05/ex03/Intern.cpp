/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:23:22 by repinat           #+#    #+#             */
/*   Updated: 2023/01/31 15:57:16 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{
}

Intern::~Intern()
{
}

Form*	Intern::makeForm(const std::string & form_name,const std::string & target) const
{
	std::string	FormNames[3] = {
		"PPF",
		"RRF",
		"SCF"
	};
	
	for (int i = 0; FormNames[i] != form_name; i++;)

	Form*	ret = NULL;
	switch(i)
	{
		case 0 :
			ret = new PresidentialPardonForm(target);
			break ;
		case 1 :
			ret = new RobotomyRequestForm(target);
			break ;
		case 2 :
			ret = new ShrubberyCreationForm(target);
			break;
		default : 
			throw InvalidFormException();
	}
	std::cout << "Intern creates " << form_name << std::endl;
	return ret;
}