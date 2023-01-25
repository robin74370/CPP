/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:47:30 by repinat           #+#    #+#             */
/*   Updated: 2023/01/16 15:47:31 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

//constructeurs

Form::Form()
	: name("Default"), sign(false), grade_sign(1), grade_exec(1)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string _name, const int _grade_sign, const int _grade_exec)
	: name(_name), sign(false), grade_sign(_grade_sign), grade_exec(_grade_exec)
{
	if (_grade_exec < 1 || _grade_sign < 1)
		throw Form::GradeTooHighException();
	else if (_grade_exec > 150 || _grade_sign > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form constrcutor called" << std::endl;
}

Form::Form(const Form & ref)
	: name(ref.name), sign(ref.sign), grade_exec(ref.grade_exec), grade_sign(ref.grade_sign)
{
	std::cout << "Form copy constructor called" << std::endl;
}

//Destructeur

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

// surcharge d'operateur =

Form&	Form::operator=(const Form& rhs)
{
	//tous les attributs private sont constants
	return (*this);	
}

//getters

std::string	Form::getName() const
{
	return this->name;
}

int	Form::getGradeSign() const
{
	return this->grade_sign;
}

int	Form::getGradeExec() const
{
	return this->grade_exec;
}

bool	Form::getSigned() const
{
	return this->sign;
}

void	Form::beSigned(const Bureaucrat& rhs)
{
	if (rhs.getGrade() <= this->getGradeSign())
		this->sign = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o, const Form& rhs)
{
	o << "Name: " << rhs.getName() << ", Sign: "
	<< rhs.getSigned() << ", Grade for Sign: "
	<< rhs.getGradeSign() << ", Grade for Execution: "
	<< rhs.getGradeExec();
	
    return o;
}