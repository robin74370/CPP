/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:08:31 by repinat           #+#    #+#             */
/*   Updated: 2023/02/08 10:37:02 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	Array<int>			intArray;
	Array<std::string>	stringArray(10);
	Array<std::string>	otherStringArray;

	stringArray[0] = "1";
	stringArray[1] = "2";
	stringArray[2] = "3";
	std::cout << "size = " << intArray.getSize() << std::endl;
	std::cout << "size = " << stringArray.getSize() << std::endl;
	otherStringArray = stringArray;
	otherStringArray[1] = "0";

	std::cout << "----------------" << std::endl;

	std::cout << "stringArray index [1] = " << stringArray[1] << std::endl;

	std::cout << "----------------" << std::endl;
	
	try
	{
		std::cout << stringArray[100] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << stringArray[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
	

	
}
