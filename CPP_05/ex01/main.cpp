/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:48:36 by repinat           #+#    #+#             */
/*   Updated: 2023/01/16 11:58:05 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	roger("Roger", 10);

	std::cout << roger << std::endl;

	try
	{
		roger.incrGrade();
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form tmp("tmp", 200, 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Form initialisation error : "
		<< e.what() << std::endl;
	}
}