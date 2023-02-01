/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:50:01 by repinat           #+#    #+#             */
/*   Updated: 2023/02/01 14:29:53 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : public Form
{
public :

	RobotomyRequestForm(const std::string & target);
	RobotomyRequestForm(const RobotomyRequestForm & rhs);
	~RobotomyRequestForm();

	RobotomyRequestForm&	operator=(const RobotomyRequestForm & other);
	void	execute(Bureaucrat const & executor) const;

private :
	
	RobotomyRequestForm();
};

#endif