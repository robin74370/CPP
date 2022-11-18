/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:08:33 by repinat           #+#    #+#             */
/*   Updated: 2022/11/18 18:22:56 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str;
	std::string *stringPTR;
	std::string	&stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;


	std::cout << "Adresse str :\t\t\t\t" << &str << std::endl;
	std::cout << "Adresse stockee dans stringPTR :\t" << stringPTR << std::endl;
	std::cout << "Adresse stockee dans stringREF :\t" << &stringREF << std::endl;
	
	std::cout << "Valeur de str :\t\t\t\t" << str << std::endl;
	std::cout << "Valeur pointee par stringPTR :\t\t" << *stringPTR << std::endl;
	std::cout << "Valeur pointee par stringREF :\t\t" << stringREF << std::endl;
}
