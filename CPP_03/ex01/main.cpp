/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 01:32:44 by repinat           #+#    #+#             */
/*   Updated: 2022/11/30 12:20:45 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	Hulk("Hulk");
	std::string str;
	std::string &ref = str;

	str = "Robin";
	Hulk.attack(str);
	Hulk.guardGate();
	Hulk.takeDamage(50);
	Hulk.beRepaired(30);
	Hulk.attack(str);

	
	return (0);
}