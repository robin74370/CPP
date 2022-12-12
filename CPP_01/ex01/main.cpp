/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:48:42 by repinat           #+#    #+#             */
/*   Updated: 2022/12/12 14:08:10 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	
	Zombie *newZombie = zombieHorde(5, "chantal");
	for (int i = 0; i < 5; i++)
		newZombie[i].announce();
	delete [] newZombie;
	return (0);
}