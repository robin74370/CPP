/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:38:37 by repinat           #+#    #+#             */
/*   Updated: 2023/01/18 14:13:57 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	srand(time(nullptr));
	int choice = rand() % 3;
	
	switch (choice)
	{
		case 0: return new A();
		case 1: return new B();
		case 2: return new C();
		default: return nullptr;
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	identify(&p);
}

int main()
{
	Base *test = generate();

	identify(test);
	identify(*test);
	
	delete test;
	
	return 0;
}