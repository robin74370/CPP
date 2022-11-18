/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:02:00 by repinat           #+#    #+#             */
/*   Updated: 2022/11/18 15:38:27 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("Robin");
	Zombie *new_zombie = newZombie("Robinrobin");
	new_zombie->announce();
	delete	 new_zombie;
	return (0);
}