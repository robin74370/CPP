/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:29:26 by repinat           #+#    #+#             */
/*   Updated: 2023/01/24 13:45:35 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "animal.hpp"

class Dog : public Animal
{
public :

	Dog(void);
	Dog(Dog const &src);
	~Dog(void);

	Dog	&operator=(Dog const &src);
	virtual void	makeSound() const;
	
private :

	std::string	sound;

};

#endif