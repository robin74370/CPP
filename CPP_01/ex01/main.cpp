/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:48:42 by repinat           #+#    #+#             */
/*   Updated: 2022/12/11 15:09:35 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	
	Zombie *newZombie = zombieHorde(5, "chantal");
	for (int i = 0; i < 5; i++)
		delete newZombie[1];
	return (0);
}