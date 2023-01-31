/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:47:34 by repinat           #+#    #+#             */
/*   Updated: 2023/01/30 17:19:48 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Bureaucrat;

#ifndef FORM_HPP
# define FORM_HPP

//si je met un include dans ce fichier
//la compilation fais nimp

#include "Bureaucrat.hpp"
#include <string.h>
#include <iostream>

class Form
{
public:

	Form(const std::string _name, const int _grade_sign, const int _grade_exec);
	Form(const Form & rhs);
	virtual ~Form();
	
	Form&	operator=(const Form& rhs);

	void	beSigned(const Bureaucrat& rhs);
	virtual void	execute(Bureaucrat const & executor) = 0;

	//getters

	std::string	getName() const;
	int		getGradeSign() const;
	int		getGradeExec() const;
	bool	getSigned() const;

	//surcharge op <<

	friend std::ostream& operator<<(std::ostream& o, const Form& rhs);
	
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
	class NotSignedException : public std::exception
	{
		public :
			const char* what() const throw()
			{
				return "Form is not signed";
			}
	};
	
protected:

	Form();
	const std::string	target;
	const std::string	name;
	bool				sign;
	int	const			grade_sign;
	int	const			grade_exec;
};

#endif