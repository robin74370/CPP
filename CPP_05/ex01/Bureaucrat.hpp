/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:48:21 by repinat           #+#    #+#             */
/*   Updated: 2023/01/16 12:04:25 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	Bureaucrat(std::string _name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat(void);

	Bureaucrat&	operator=(Bureaucrat const & src);
	friend std::ostream&	operator<<(std::ostream& o, const Bureaucrat& rhs);

	void	incrGrade(void);
	void	decrGrade(void);

	std::string	getName(void) const;
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

	std::string	name;
	int	grade;

};


#endif