/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 00:23:49 by repinat           #+#    #+#             */
/*   Updated: 2022/11/30 01:08:18 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap test("bonhomme");
	std::string	str;
	std::string	&looser = str;

	str = "LOOSERRR";

	test.attack(looser);
	test.takeDamage(4);
	test.beRepaired(3);

	return (0);
}
