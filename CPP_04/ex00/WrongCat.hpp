/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:38:29 by repinat           #+#    #+#             */
/*   Updated: 2023/01/24 13:45:45 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WROCAT_HPP
# define CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public :

	WrongCat(void);
	WrongCat(WrongCat const &src);
	~WrongCat(void);

	WrongCat	&operator=(WrongCat const &src);
	virtual void	makeSound() const;
	
private :

	std::string	sound;

};

#endif