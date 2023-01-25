/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:38:12 by repinat           #+#    #+#             */
/*   Updated: 2023/01/18 14:55:57 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	char tab1[] = {'a', 'b', 'c' ,'d' ,'e' ,'f'};
	int	tab2[] = {0, 1, 2, 3, 4, 5};
	int size = 6;
	
	std::cout << "Tableau de char : " << std::endl;
	std::cout << std::endl;
	iter(tab1, size, print_t);
	std::cout << std::endl;

	std::cout << "Tableau de int :" << std::endl;
	std::cout << std::endl;
	iter(tab2, size, print_t);

	return 0;
}