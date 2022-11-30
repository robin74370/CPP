/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 01:32:59 by repinat           #+#    #+#             */
/*   Updated: 2022/11/30 12:07:15 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:

	ClapTrap(void);
	ClapTrap(std::string _name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap(void);

	ClapTrap &operator=(ClapTrap const &src);

	void	attack(const std::string & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:

	std::string	name;
	int			Hit_points;
	int			Energy_points;
	int			Attack_damage;
};


#endif