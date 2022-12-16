/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:10:57 by repinat           #+#    #+#             */
/*   Updated: 2022/12/16 18:11:23 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
public:
	
	Bureaucrat(void);
	Bureaucrat(std::string _name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat(void);

	Bureaucrat	&operator=(Bureaucrat const & src);
	std::ostream	&operator<<(std::ostream & o, Bureaucrat & ref);

	void	incrGrade(void);
	void	decrGrade(void);

	std::string	getName(void) const;
	int	getGrade(void) const;

	class GradeTooHighException : public std::exception
	{
		public :
			GradeTooHighException(void);
			~GradeTooHighException(void);

			void GradeTooHigh(void);
	};

	class GradeTooLowException : public std::exception
	{
		public :
			GradeTooLowException(void);
			~GradeTooLowException(void);

			void GradeTooLow(void);
	};

private:

	std::string	name;
	int	grade;

};


#endif