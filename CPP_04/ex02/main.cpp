/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:49:05 by repinat           #+#    #+#             */
/*   Updated: 2023/01/30 14:29:00 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//doit crash si ligne de dessous decommentee
	// Animal CRASH;
	Animal *tab[20];

	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}
	for (int i = 0; i < 20; i++)
		delete tab[i];
	return (0);
}