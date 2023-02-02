/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:50:01 by repinat           #+#    #+#             */
/*   Updated: 2023/02/02 13:13:53 by repinat          ###   ########.fr       */
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
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm&	operator=(const RobotomyRequestForm & other);
	virtual void	execute(Bureaucrat const & executor) const;

private :

	const std::string	target;
	RobotomyRequestForm();
};

#endif