/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:38:24 by repinat           #+#    #+#             */
/*   Updated: 2022/12/08 15:49:44 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public :

	WrongAnimal(void);
	WrongAnimal(std::string _type);
	WrongAnimal(WrongAnimal const &src);
	~WrongAnimal(void);

	WrongAnimal	&operator=(WrongAnimal const &src);

	virtual void	makeSound(void) const;
	std::string	getType(void) const;

protected :

	std::string	type;

};

#endif
