/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:49:02 by repinat           #+#    #+#             */
/*   Updated: 2023/01/31 14:43:40 by repinat          ###   ########.fr       */
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
	virtual ~Animal(void);

	Animal	&operator=(Animal const &src);

	virtual void	makeSound(void) const;
	std::string	getType(void) const;

protected :

	std::string	type;
};


#endif