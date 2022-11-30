/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:50:05 by repinat           #+#    #+#             */
/*   Updated: 2022/11/30 13:55:20 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap	Hulk("Hulk");
	FragTrap	Spiderman("Spiderman");
	std::string str;
	std::string &ref = str;

	str = "Robin";
	Hulk.attack(str);
	Hulk.guardGate();
	Hulk.takeDamage(50);
	Hulk.beRepaired(30);
	Hulk.attack(str);
	
	std::cout << std::endl;
	
	Spiderman.attack(str);
	Spiderman.takeDamage(90);
	Spiderman.beRepaired(60);
	Spiderman.attack(str);
	Spiderman.highFiveGuys();
	
	return (0);
}