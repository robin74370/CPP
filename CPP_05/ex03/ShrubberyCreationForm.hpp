/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:50:06 by repinat           #+#    #+#             */
/*   Updated: 2023/01/30 17:41:21 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public :

	ShrubberyCreationForm(const std::string & target);
	ShrubberyCreationForm(const ShrubberyCreationForm & rhs);
	~ShrubberyCreationForm();

	std::string	getTarget() {return this->target;}

	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm & other);
	void	execute(Bureaucrat const & executor);

private :

	ShrubberyCreationForm();
};

#endif