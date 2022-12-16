/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:45:10 by repinat           #+#    #+#             */
/*   Updated: 2022/12/16 18:04:24 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Francis("francis", 151);
	Bureaucrat Roger("rogers", 1);

	try
	{
		Francis.decrGrade();
		Roger.incrGrade();
	}
	
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
