/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:23:19 by repinat           #+#    #+#             */
/*   Updated: 2023/01/31 15:41:08 by repinat          ###   ########.fr       */
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
	
		class InvalidFormException : public std::exceptions
		{
			public :
			const char* what() const throw()
			{
				return "Grade is too high";
			}
		};
		
		Form* makeForm(const std::string & form_name,const std::string & target) const;
};

#endif