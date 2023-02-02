/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:48:21 by repinat           #+#    #+#             */
/*   Updated: 2023/02/02 13:56:07 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Form;

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <string.h>
#include <iostream>
#include <exception>

class Bureaucrat
{
public:
	
	Bureaucrat(void);
	Bureaucrat(const std::string _name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat(void);

	Bureaucrat&	operator=(Bureaucrat const & src);

	void	incrGrade(void);
	void	decrGrade(void);

	const std::string	getName(void) const;
	int	getGrade(void) const;

	void	signForm(Form & form);

	class GradeTooHighException : public std::exception
	{
		public :
			const char* what() const throw()
			{
				return "Grade is too high";
			}
	};

	class GradeTooLowException : public std::exception
	{
		public :
			const char* what() const throw()
			{
				return "Grade is too low";
			}
	};

private:

	const std::string	name;
	int	grade;

};
std::ostream&	operator<<(std::ostream& o, const Bureaucrat& rhs);


#endif