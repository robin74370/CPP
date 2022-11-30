/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:17:33 by repinat           #+#    #+#             */
/*   Updated: 2022/11/29 17:43:31 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level) const
{
	void	 (Harl::*complain_p[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*complain_p[i])();
			break ;
		}
	}
	// complain_p[0] = &Harl::debug;
	// complain_p[0] = &Harl::info;
	// complain_p[0] = &Harl::warning;
	// complain_p[0] = &Harl::error;
}

void	Harl::debug(void)
{
	std::cout << "DEBUG :" << std::endl;
	std::cout << "I love having extra bacon for my";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger.";
	std::cout << "I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO :" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger ! ";
	std::cout << "If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING :" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << "I’ve been coming for years whereas you started ";
	std::cout << "working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR :" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now.";
	std::cout << std::endl;
}