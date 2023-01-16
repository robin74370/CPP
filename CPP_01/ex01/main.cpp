/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:48:42 by repinat           #+#    #+#             */
/*   Updated: 2022/12/27 15:17:25 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	//allocation des zombies
	Zombie *newZombie = zombieHorde(5, "robin");
	
	//annonce des noms
	for (int i = 0; i < 5; i++)
		newZombie[i].announce();
	
	//libere la memoire
	delete [] newZombie;
	return (0);
}