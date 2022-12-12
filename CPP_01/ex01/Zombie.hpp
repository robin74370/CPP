/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:48:49 by repinat           #+#    #+#             */
/*   Updated: 2022/12/12 14:12:55 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class   Zombie
{
	
	public :
	
	Zombie(void);
	Zombie(std::string set_name);
	~Zombie(void);
	
	void	setName(std::string _name);
	void	announce(void);

	private :

	std::string	name;
};

Zombie  *newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif