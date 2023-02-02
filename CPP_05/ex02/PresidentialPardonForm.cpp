/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:49:54 by repinat           #+#    #+#             */
/*   Updated: 2023/02/02 10:14:20 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form()
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & _target) : Form("PPF", 25, 5, _target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & rhs)
{
	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    if (this == &copy)
            return *this;
    return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw Form::NotSignedException();
	else if (executor.getGrade() >= this->getGradeExec())
		throw Form::GradeTooLowException();
	std::cout << target << "was forgiven by Zapod Beeblebrox !" << std::endl;
}