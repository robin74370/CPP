/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:38:24 by repinat           #+#    #+#             */
/*   Updated: 2023/01/31 14:43:54 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public :

	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &src);
	 virtual ~WrongAnimal(void);

	WrongAnimal	&operator=(WrongAnimal const &src);

	virtual void	makeSound(void) const;
	std::string	getType(void) const;

protected :

	std::string	type;

};

#endif
