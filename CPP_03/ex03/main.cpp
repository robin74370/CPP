/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:50:05 by repinat           #+#    #+#             */
/*   Updated: 2022/11/30 18:44:46 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ScavTrap		Hulk("Hulk");
	FragTrap		Spiderman("Spiderman");
	DiamondTrap		Superman("Superman");
	std::string 	str;
	std::string 	&ref = str;

	std::cout << std::endl;

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

	std::cout << std::endl;

	Superman.whoAmI();
	Superman.attack(str);
	Superman.takeDamage(20);
	Superman.beRepaired(20);
	Superman.guardGate();
	
	std::cout << std::endl;

	return (0);
}