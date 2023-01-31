/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:49:56 by repinat           #+#    #+#             */
/*   Updated: 2023/01/30 17:41:16 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public :

	PresidentialPardonForm(const std::string & target);
	PresidentialPardonForm(const ShrubberyCreationForm & rhs);
	~PresidentialPardonForm();

	std::string	getTarget() {return this->target;}

	PresidentialPardonForm&	operator=(const PresidentialPardonForm & other);
	void	execute(Bureaucrat const & executor);

private :

	PresidentialPardonForm();
};

#endif