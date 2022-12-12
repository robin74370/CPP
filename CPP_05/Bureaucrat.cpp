/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:10:54 by repinat           #+#    #+#             */
/*   Updated: 2022/12/12 13:57:27 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
	: name("Default"), grade(1)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade)
	: name(_name), grade(_grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;	
	*this = src;

	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & src)
{
	if (this != &src)
	{
		this->name = src.name;
		this->grade = src.grade;
	}	
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::IncrGrade(void)
{
	if (this->grade >= 1)
		this->grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrGrade(void)
{
	if (this->grade <= 150)
		this->grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::GradeTooHighException::GradeTooHigh(void)
{
	std::cout << "Grade too high, try again" << std::endl;
}

void Bureaucrat::GradeTooLowException::GradeTooLow(void)
{
	std::cout << "Grade too high, try again" << std::endl;
}


