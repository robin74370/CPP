/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:27:37 by repinat           #+#    #+#             */
/*   Updated: 2022/11/30 13:44:45 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public :
	FragTrap(void);
	FragTrap(std::string _name);
	FragTrap(FragTrap const &src);
	~FragTrap(void);

	FragTrap &operator=(FragTrap const &src);

	void	highFiveGuys(void);
	
private :
};

#endif