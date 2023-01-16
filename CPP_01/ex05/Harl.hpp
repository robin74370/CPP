/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:09:48 by repinat           #+#    #+#             */
/*   Updated: 2022/12/27 15:34:05 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	
public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);
	
private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};


#endif