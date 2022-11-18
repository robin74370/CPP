/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:58:15 by repinat           #+#    #+#             */
/*   Updated: 2022/11/18 15:28:45 by repinat          ###   ########.fr       */
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
void	randomChump(std::string name);

#endif