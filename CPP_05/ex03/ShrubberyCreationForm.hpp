/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:50:06 by repinat           #+#    #+#             */
/*   Updated: 2023/02/02 13:13:58 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>

class ShrubberyCreationForm : public Form
{
public :

	ShrubberyCreationForm(const std::string & target);
	ShrubberyCreationForm(const ShrubberyCreationForm & rhs);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm & other);
	virtual void	execute(Bureaucrat const & executor) const;

private :

	const std::string	target;
	ShrubberyCreationForm();
};

#endif