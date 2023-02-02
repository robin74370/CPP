/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:48:36 by repinat           #+#    #+#             */
/*   Updated: 2023/02/02 14:09:01 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	roger("Roger", 10);

	std::cout << roger << std::endl;

	try
	{
		roger.incrGrade();
		roger.decrGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Form	aff("tmp", 50, 50);
	
	std::cout << "----------" << std::endl;
	std::cout << "Name : "<< aff.getName() << std::endl;
	std::cout << "sign : "<< aff.getSigned() << std::endl;
	std::cout << "Grade sign : "<< aff.getGradeExec() << std::endl;
	std::cout << "Grade exec : "<< aff.getGradeSign() << std::endl;

	std::cout << "----------" << std::endl;

	try
	{
		roger.signForm(aff);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Form initialisation error : "
		<< e.what() << std::endl << std::endl;
	}

	try
	{
		Form tmp("tmp", 200, 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Form initialisation error : "
		<< e.what() << std::endl;
	}
}