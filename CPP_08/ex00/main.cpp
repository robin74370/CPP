/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:59:14 by repinat           #+#    #+#             */
/*   Updated: 2023/01/23 19:56:32 by repinat          ###   ########.fr       */
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
	//appel au constrcuteur pour initialiser
	std::vector<int> myVector(50, 100);
	myVector[3] = 101;

	try
	{
		std::cout << *easyfind(myVector, 101).base() << std::endl;
		std::cout << *easyfind(myVector, 90).base() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}