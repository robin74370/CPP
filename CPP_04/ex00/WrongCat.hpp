/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:38:29 by repinat           #+#    #+#             */
/*   Updated: 2023/01/31 14:43:58 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public :

	WrongCat(void);
	WrongCat(WrongCat const &src);
	virtual ~WrongCat(void);

	WrongCat	&operator=(WrongCat const &src);
	virtual void	makeSound() const;
	
private :

	std::string	sound;

};

#endif