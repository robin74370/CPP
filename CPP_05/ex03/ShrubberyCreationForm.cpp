/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:50:03 by repinat           #+#    #+#             */
/*   Updated: 2023/01/30 17:42:23 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include

ShrubberyCreationForm::ShrubberyCreationForm() : Form()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & _target) : Form("SCF", 145, 137), target(_target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & rhs)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this == &copy)
            return *this;
    return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	if (this->getSigned() == false)
		throw Form::NotSignedException()
	else if (executor.getGradeExec() >= this->getGradeExec())
		throw Form::GradeTooLowException();
		
	ofstream file(getTarget() + "_Shrubbery");	
    if (file.is_open())
    {
        file	<< "      *\n"
            	<< "     ***\n"
            	<< "    *****\n"
            	<< "   *******\n"
            	<< "  *joyeux**\n"
            	<< " ****noel***\n"
            	<< "*************\n"
				<< "      ||      \n"
				
        file.close();
        cout << "Fichier créé et rempli avec succès" << endl;
    }
    else
    {
        cout << "Impossible d'ouvrir le fichier" << endl;
    }
}