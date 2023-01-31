/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:50:01 by repinat           #+#    #+#             */
/*   Updated: 2023/01/31 13:44:27 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public :

	RobotomyRequestForm(const std::string & target);
	RobotomyRequestForm(const RobotomyRequestForm & rhs);
	~RobotomyRequestForm();

	std::string	getTarget() {return this->target;}

	RobotomyRequestForm&	operator=(const RobotomyRequestForm & other);
	void	execute(Bureaucrat const & executor);

private :
	
	RobotomyRequestForm();
};

#endif