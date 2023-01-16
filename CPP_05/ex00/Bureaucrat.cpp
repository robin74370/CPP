/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:10:54 by repinat           #+#    #+#             */
/*   Updated: 2023/01/12 16:40:38 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
	: name("Default"), grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade)
	: name(_name)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = _grade;
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;	
	*this = src;

	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
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

void	Bureaucrat::incrGrade(void)
{
	if (this->grade > 1)
		this->grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrGrade(void)
{
	if (this->grade < 150)
		this->grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void)
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void)
{
}


std::ostream&	operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << ", Bureaucrat grade" << rhs.getGrade() << std::endl;
	
	return o;
}