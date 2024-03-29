/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:10:03 by repinat           #+#    #+#             */
/*   Updated: 2022/11/29 17:44:12 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
public :
		
	//constructeur
	HumanB(std::string name);
	//destructeur
	~HumanB(void);

	//setter
	void	setWeapon(Weapon &weapon);
	
	void	attack() const;

private :

	std::string	_name;
	Weapon *_weapon;
	
};


#endif