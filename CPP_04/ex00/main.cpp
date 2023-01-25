/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:49:05 by repinat           #+#    #+#             */
/*   Updated: 2023/01/24 13:41:49 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* 		meta = new Animal();
	const Animal* 		j = new Dog();
	const Animal* 		i = new Cat();
	const WrongAnimal*	f = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << f->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	f->makeSound();


	delete(meta);
	delete (j);
	delete (i);
	delete (f);
	
	return 0;

}