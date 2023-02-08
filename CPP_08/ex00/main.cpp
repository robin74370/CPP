/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:59:14 by repinat           #+#    #+#             */
/*   Updated: 2023/02/08 10:51:01 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <exception>
#include <string>
#include <iostream>

void	print(int i)
{
	std::cout << i << std::endl;
}

int main()
{
	//50 = size, 100 = elements aux 50 elements du vector
	
	std::vector<int> myVector(50, 100);
	
	myVector[3] = 42;

	try
	{
		std::cout << *easyfind(myVector, 42).base() << std::endl;
		std::cout << *easyfind(myVector, 90).base() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}