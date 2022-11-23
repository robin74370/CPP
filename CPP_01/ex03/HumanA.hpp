/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:10:08 by repinat           #+#    #+#             */
/*   Updated: 2022/11/23 16:34:04 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class HumanA
{
public :
		
	HumanA(std::string weapon);
	~HumanA(void);

	void	attack();

private :

	std::string	name;

};

#endif