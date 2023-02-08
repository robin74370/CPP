/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:10:39 by repinat           #+#    #+#             */
/*   Updated: 2023/02/08 15:12:38 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <vector>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;

	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	/******************************/
	std::cout << "========VOICI LA COMPARAISON========" << std::endl;

	std::vector<int> vect;

	vect.push_back(5);
	vect.push_back(17);
	
	std::cout << vect.back() << std::endl;

	vect.pop_back();
	
	std::cout << vect.size() << std::endl;
	
	vect.push_back(3);
	vect.push_back(5);
	vect.push_back(737);
	//[...]
	vect.push_back(0);
	
	std::vector<int>::iterator it2 = vect.begin();
	std::vector<int>::iterator ite2 = vect.end();

	++it2;
	--it2;
	
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	return 0;
}