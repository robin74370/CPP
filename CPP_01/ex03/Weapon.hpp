/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:26:37 by repinat           #+#    #+#             */
/*   Updated: 2022/11/28 14:33:21 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
public :

	//constructeur
	Weapon(std::string type);
	//destructeur
	~Weapon(void);

	//getter
	std::string	&getType(void);
	
	//setter
	void	setType(std::string type);

private :

	std::string _type;
};


#endif