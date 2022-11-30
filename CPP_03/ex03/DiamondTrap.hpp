/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:35:59 by repinat           #+#    #+#             */
/*   Updated: 2022/11/30 18:30:53 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public :
	DiamondTrap(void);
	DiamondTrap(std::string _name);
	DiamondTrap(DiamondTrap const &src);
	~DiamondTrap(void);

	DiamondTrap	&operator=(DiamondTrap const &src);

	void	attack(const std::string & target);
	void	whoAmI(void);

private :
	std::string	name;
};


#endif