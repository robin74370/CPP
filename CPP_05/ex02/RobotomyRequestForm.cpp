/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:49:59 by repinat           #+#    #+#             */
/*   Updated: 2023/02/02 13:16:18 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form()
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & _target)
	: Form("RRF", 72, 45), target(_target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & rhs)
	: Form(rhs), target(rhs.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    if (this == &copy)
            return *this;
    return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw Form::NotSignedException();
	else if (executor.getGrade() >= this->getGradeExec())
		throw Form::GradeTooLowException();
	srand(time(0));
	if (rand() % 2)
		std::cout << target << " has been robotomized" << std::endl;
	else
		std::cout << "the robotomisation failed" << std::endl;
}