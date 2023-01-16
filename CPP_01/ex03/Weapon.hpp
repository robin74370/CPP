/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:26:37 by repinat           #+#    #+#             */
/*   Updated: 2022/12/27 15:23:33 by repinat          ###   ########.fr       */
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
	const std::string	&getType(void);
	
	//setter
	void	setType(std::string _type);

private :

	std::string type;
};


#endif