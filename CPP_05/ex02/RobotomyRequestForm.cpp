/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:49:59 by repinat           #+#    #+#             */
/*   Updated: 2023/01/30 17:42:43 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form()
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & _target) : Form("RRF", 72, 45), target(_target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const ShrubberyCreationForm & rhs)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this == &copy)
            return *this;
    return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if (this->getSigned() == false)
		throw Form::NotSignedException()
	else if (executor.getGradeExec() >= this->getGradeExec())
		throw Form::GradeTooLowException();
	int number = srand(time(0));
	if (number % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << "the robotomisation failed" << std::endl;
}