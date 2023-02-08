/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:05:22 by repinat           #+#    #+#             */
/*   Updated: 2023/02/08 15:25:10 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::vector<int>	vec(10000, 5);
	vec[0] = 0;
	std::vector<int>::const_iterator it1 = vec.begin();
	std::vector<int>::const_iterator it2 = vec.end();

	//rempli en utilisant deuxieme addNumber
	Span sp2 = Span(10000);
	//essaie dejouter un 10001eme nb
	sp2.addNumber(it1, it2);
	try
	{
		sp2.addNumber(2);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << sp2.longestSpan() << std::endl;
	std::cout << sp2.shortestSpan() << std::endl << std::endl;


	std::cout << "===Main du sujet ===" << std::endl << std::endl;
	
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}