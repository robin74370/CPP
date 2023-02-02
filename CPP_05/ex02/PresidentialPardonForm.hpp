/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:49:56 by repinat           #+#    #+#             */
/*   Updated: 2023/02/02 10:21:02 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
public :

	PresidentialPardonForm(const std::string & target);
	PresidentialPardonForm(const PresidentialPardonForm & rhs);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm&	operator=(const PresidentialPardonForm & other);
	virtual void	execute(Bureaucrat const & executor) const;

private :

	PresidentialPardonForm();
};

#endif