/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:10:57 by repinat           #+#    #+#             */
/*   Updated: 2022/12/12 13:57:37 by repinat          ###   ########.fr       */
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

	void	incrGrade(void);
	void	decrGrade(void);

	std::string	getName(void);
	int	getGrade(void);

	class GradeTooHighException
	{
		
	};
	

private:

	std::string	name;
	int	grade;

};


#endif