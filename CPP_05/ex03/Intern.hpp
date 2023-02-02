/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:40:22 by repinat           #+#    #+#             */
/*   Updated: 2023/02/02 14:47:07 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public :
		Intern();
		~Intern();
	
		Form*	makePPF(std::string target);
		Form*	makeRRF(std::string target);
		Form*	makeSCF(std::string target);
	
		class InvalidFormException : public std::exception
		{
			public :
			const char* what() const throw()
			{
				return "Grade is too high";
			}
		};
		
		Form* makeForm(const std::string & form_name,const std::string & target);

private :
	Intern(const Intern & other);
	Intern & operator=(const Intern & other);
};

#endif