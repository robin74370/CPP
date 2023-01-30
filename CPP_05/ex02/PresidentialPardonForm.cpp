/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:49:54 by repinat           #+#    #+#             */
/*   Updated: 2023/01/30 17:42:52 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form()
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & _target) : Form("PPF", 25, 5), target(_target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const ShrubberyCreationForm & rhs)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this == &copy)
            return *this;
    return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (this->getSigned() == false)
		throw Form::NotSignedException()
	else if (executor.getGradeExec() >= this->getGradeExec())
		throw Form::GradeTooLowException();
	std::cout << this->getTarget() << "was forgiven" << std::endl;
}