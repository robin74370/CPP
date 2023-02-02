/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:47:37 by repinat           #+#    #+#             */
/*   Updated: 2023/02/02 15:00:30 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	// std::cout << "coucou" << std::endl;
	// try
	// {
	// 	Bureaucrat("Bob", 0);
	// }
	// catch(std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	
	// try
	// {
	// 	Bureaucrat("Bob", 200);
	// }
	// catch(std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	
	// try
	// {
	// 	Bureaucrat Bob = Bureaucrat("Bob", 1);
	// 	Bob.incrGrade();
	// }
	// catch(std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// try
	// {
	// 	Bureaucrat Bob = Bureaucrat("Bob", 150);
	// 	Bob.decrGrade();
	// }
	// catch(std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// try
	// {
	// 	Bureaucrat Bob = Bureaucrat("Bob", 42);
	// 	Bob.incrGrade();
	// 	std::cout << Bob << std::endl;
	// 	Bob.decrGrade();
	// 	std::cout << Bob << std::endl;
	// }
	// catch(std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// Bureaucrat    pattick("Patrick", 10);
    // std::cout << pattick << std::endl;
    // try
    // {
    //     pattick.incrGrade();
        
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // try
    // {
    //     Form tmp("tmp", 200, 100);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << "Form initialisation error : "
    //     << e.what() << std::endl;
    // }

	
	RobotomyRequestForm rrf = RobotomyRequestForm("Bob");
	ShrubberyCreationForm scf = ShrubberyCreationForm("Bob");
	PresidentialPardonForm ppf = PresidentialPardonForm("Bob");
	std::cout << rrf << std::endl;
	std::cout << scf << std::endl;
	std::cout << ppf << std::endl;
	Bureaucrat Bob = Bureaucrat("Bob", 1);
	Bureaucrat Jim = Bureaucrat("Jim", 42);
	Bob.signForm(rrf);
	Bob.executeForm(rrf);
	std::cout << "----------------------------" << std::endl;
	Bob.signForm(scf);
	Bob.executeForm(scf);
	std::cout << "----------------------------" << std::endl;
	Bob.signForm(ppf);
	Bob.executeForm(ppf);
	std::cout << "----------------------------" << std::endl;
	Jim.signForm(rrf);
	Jim.executeForm(rrf);
	std::cout << "----------------------------" << std::endl;
	Jim.signForm(scf);
	Jim.executeForm(scf);
	std::cout << "----------------------------" << std::endl;
	Jim.signForm(ppf);
	Jim.executeForm(ppf);
	std::cout << "----------------------------" << std::endl;
	std::cout << rrf << std::endl;
	std::cout << scf << std::endl;
	std::cout << ppf << std::endl;
	std::cout << "----------------------------" << std::endl;

	
	Intern	Jacques;
	
	Jacques.makeForm("PresidentialPardonForm", "bob");
	
	return (0);
}