/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:49:02 by repinat           #+#    #+#             */
/*   Updated: 2022/11/30 19:21:26 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
public :

	Animal(void);
	Animal(std::string _type);
	Animal(Animal const &src);
	~Animal(void);

	Animal	&operator=(Animal const &src);

	void	makeSound();
	void	getType(void);

protected :

	std::string	type;
};


class Dog : public Animal
{
public :

	Dog(void);
	Dog(std::string _type);
	Dog(Dog const &src);
	~Dog(void);

	Dog	&operator=(Dog const &src);
	void	makeSound();
	
private :

	std::string	sound;

};


class Cat : public Animal
{
public :

	Cat(void);
	Cat(std::string _type);
	Cat(Cat const &src);
	~Cat(void);

	Cat	&operator=(Cat const &src);
	void	makeSound();
	
private :

	std::string	sound;

};

#endif