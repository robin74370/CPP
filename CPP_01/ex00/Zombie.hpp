/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:58:15 by repinat           #+#    #+#             */
/*   Updated: 2022/11/17 16:02:06 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class   Zombie
{
	Zombie(std::string set_name)
	{
		name = set_name;
	}
	
	Zombie *newZombie(std::string name);
	
	public :

	void	announce(void)
	{
		std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
	}

	private :

	std::string	name;
};

#endif