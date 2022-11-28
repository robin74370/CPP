/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:19:54 by repinat           #+#    #+#             */
/*   Updated: 2022/11/28 16:31:49 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <iostream>
#include <fstream>

void	ft_replace(char **av)
{
	std::ofstream text;
	
	text.open(av[1], std::ios::in);
}

int main(int ac, char **av)
{
	// if (ac != 4)
	// {
	// 	std::cout << "Wrong inputs, try again" << std::endl;
	// 	return (1);
	// }
	// else
		ft_replace(av);	
}