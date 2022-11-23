/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:26:37 by repinat           #+#    #+#             */
/*   Updated: 2022/11/23 16:36:28 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include "HumanB.hpp"
#include "HumanA.hpp"

class	Weapon : public HumanA
{
	public :

	std::string	&getType();
	void	setType(std::string str);

	private :

	std::string type;
};


#endif