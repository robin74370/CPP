/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:10:57 by repinat           #+#    #+#             */
/*   Updated: 2022/12/12 13:29:52 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
public :

	Bureaucrat(void);
	Bureaucrat(std::string _name, int _grade);
	Bureaucrat(Bureaucrat const & src);

	Bureaucrat	&operator=(Bureaucrat const & src);

	//getters
	std::string getName(void) const;
	int getGrade(void) const;

	//incrementateurs
	void	IncrGrade(void);
	void	decrGrade(void);

	class GradeTooHighException : public std::exception
	{
		public :
			void GradeTooHigh(void);
	};

	class GradeTooLowException : public std::exception
	{
		public :
			void GradeTooLow(void);
	};

private :

	std::string 	name;  // checker si je dois le mettre en const (voir correction)
	int				grade;

};

#endif