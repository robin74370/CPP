/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:48:51 by repinat           #+#    #+#             */
/*   Updated: 2022/11/18 16:04:05 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int i;
	Zombie	*first;
	
	for (i = 0; i < N; i++)
	{
		Zombie	*new_Zombie = newZombie(name);
		if (i == 0)
			first = new_Zombie;
		new_Zombie->announce();
	}
	return (first);
}
