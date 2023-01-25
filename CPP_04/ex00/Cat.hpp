/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:29:19 by repinat           #+#    #+#             */
/*   Updated: 2023/01/24 13:45:31 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "animal.hpp"

class Cat : public Animal
{
public :

	Cat(void);
	Cat(Cat const &src);
	~Cat(void);

	Cat	&operator=(Cat const &src);
	virtual void	makeSound() const;
	
private :

	std::string	sound;

};

#endif