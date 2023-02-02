/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:45:10 by repinat           #+#    #+#             */
/*   Updated: 2023/02/02 13:58:49 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Francis("francis", 149);
	Bureaucrat Roger("rogers", 1);

	try
	{
		Francis.decrGrade();
		// Francis.decrGrade();
		Roger.incrGrade();
	}
	
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
