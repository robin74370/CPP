/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:49:05 by repinat           #+#    #+#             */
/*   Updated: 2022/12/07 20:42:56 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
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