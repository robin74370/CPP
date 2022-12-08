/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:52:56 by repinat           #+#    #+#             */
/*   Updated: 2022/12/07 21:02:54 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# include AMATERIA_HPP

#include <iostream>

class AMateria
{
public:
	AMateria(void);
	AMateria(std::string const & type);
	//constructeur de copie a rejouter
	
	std::string	const & getType(void) const;
	
	
	
	virtual	AMateria* clone() const = 0;
	
protected :
	std::string	_type;
};

#endif