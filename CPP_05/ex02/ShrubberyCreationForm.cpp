/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:50:03 by repinat           #+#    #+#             */
/*   Updated: 2023/02/01 15:08:43 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & _target) : Form("SCF", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & rhs)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this == &copy)
            return *this;
    return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw Form::NotSignedException();
	else if (executor.getGrade() >= this->getGradeExec())
		throw Form::GradeTooLowException();
		
	std::ofstream file;
    
    file.open(this->getTarget() + "_Shrubbery");
    if (file.is_open())
    {
        file	<< "      *\n"
            	<< "     ***\n"
            	<< "    *****\n"
            	<< "   *******\n"
            	<< "  *joyeux**\n"
            	<< " ****noel***\n"
            	<< "*************\n"
				<< "      ||      \n";
				
        file.close();
        std::cout << "Fichier créé et rempli avec succès" << std::endl;
    }
    else
    {
        std::cout << "Impossible d'ouvrir le fichier" << std::endl;
    }
}