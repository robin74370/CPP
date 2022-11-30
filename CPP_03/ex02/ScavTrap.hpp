/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 01:33:06 by repinat           #+#    #+#             */
/*   Updated: 2022/11/30 18:25:32 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:

	//Constructeur par defaut
	ScavTrap(void);
	//Constructeur par copie
	ScavTrap(ScavTrap const &src);
	ScavTrap(std::string _name);
	~ScavTrap(void);

	ScavTrap &operator=(ScavTrap const &src);

	void	attack(const std::string & target);

	void	guardGate(void);

private :	
};


#endif