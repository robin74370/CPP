/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:29:19 by repinat           #+#    #+#             */
/*   Updated: 2022/12/06 13:18:59 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public :

	Cat(void);
	Cat(std::string _type);
	Cat(Cat const &src);
	~Cat(void);

	Cat	&operator=(Cat const &src);
	virtual void	makeSound() const;
	
private :

	std::string	sound;
	Brain	*brain;

};

#endif