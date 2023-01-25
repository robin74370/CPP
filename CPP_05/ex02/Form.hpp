/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:47:34 by repinat           #+#    #+#             */
/*   Updated: 2023/01/16 15:57:56 by repinat          ###   ########.fr       */
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

	Form(void);
	Form(const std::string _name, const int _grade_sign,
		const int _grade_exec);
	Form(const Form & rhs);
	~Form();
	
	Form&	operator=(const Form& rhs);

	void	beSigned(const Bureaucrat& rhs);

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
	
protected:

	const std::string	name;
	bool				sign;
	int	const			grade_sign;
	int	const			grade_exec;
};

#endif