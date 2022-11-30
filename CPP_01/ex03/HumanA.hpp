/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:10:08 by repinat           #+#    #+#             */
/*   Updated: 2022/11/29 17:44:17 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public :
	
	//constructeur
	HumanA(std::string name, Weapon &weapon);
	//destructeur
	~HumanA(void);

	void	attack() const;

private :

	std::string	_name;
	Weapon &_weapon;

};

#endif