/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:59:34 by repinat           #+#    #+#             */
/*   Updated: 2023/02/01 15:35:11 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <string.h>
#include <climits>
#include <iostream>

void	toChar(double val)
{
	//val != val pour comparer nan a lui meme (renvoie toujours false)
	if (val != val || !isascii(val))
		std::cout << "Impossible" << std::endl;
	else
	{
		char x = static_cast<char>(val);
		if (isprint(x))
			std::cout << "'" << x << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
}

void	toInt(double val)
{
	if (val != val)
	{
		std::cout << "Impossible" << std::endl;
		return ;
	}
	int x = static_cast<int>(val);
	if (x > INT_MAX || x < INT_MIN)
	{
		std::cout << "Impossible" << std::endl;
		return ;
	}
	std::cout << x << std::endl;
}

void	toFloat(double val)
{
	float x = static_cast<float>(val);
	
	std::cout << x << "f" << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong parameters" << std::endl;
		return 0;
	}	
	double val = atof(av[1]);
	
	std::cout.precision(1);
	std::cout << std::fixed;
	
	std::cout << "char: ";
	toChar(val);
	
	std::cout << "int: ";
	toInt(val);

	std::cout << "float: ";
	toFloat(val);

	std::cout << "double: " << val << std::endl;
	return (0);
	
}