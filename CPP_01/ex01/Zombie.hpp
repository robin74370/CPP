/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:48:49 by repinat           #+#    #+#             */
/*   Updated: 2022/11/18 15:50:26 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class   Zombie
{
	
	public :
	
	Zombie(std::string set_name);
	~Zombie(void);
	

	void	announce(void);

	private :

	std::string	name;
};

Zombie  *newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif