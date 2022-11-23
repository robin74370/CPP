/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:10:03 by repinat           #+#    #+#             */
/*   Updated: 2022/11/23 16:28:08 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
public :
		
	HumanB(void);
	~HumanB(void);

	void	attack();

private :

	std::string	name;

};


#endif