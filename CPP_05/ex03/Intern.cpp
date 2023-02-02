/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:23:22 by repinat           #+#    #+#             */
/*   Updated: 2023/02/02 15:27:17 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form*	Intern::makePPF(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form*	Intern::makeRRF(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form*	Intern::makeSCF(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeForm(const std::string & form_name,const std::string & target)
{
	std::string classNames[3] = {"ShrubberyCreationForm", "PresidentialPardonForm", "RobotomyRequestForm" };

	Form* (Intern::*createForm[3])(std::string) = {&Intern::makeSCF, &Intern::makePPF, &Intern::makeRRF};

	for (int i = 0; i < 3; i++)
	{
		if (form_name == classNames[i])
		{
			Form *form = (this->*createForm[i])(target);
			std::cout << "Intern creates " << form_name << std::endl;
			return form;
		}
	}
	std::cout << "Form name not found" << std::endl;
	return NULL;
}