/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 06:24:03 by repinat           #+#    #+#             */
/*   Updated: 2022/11/14 10:41:58 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


int	main(int ac, char **av)
{
	Phonebook	pb;
	std::string command;
	
	while(42)
	{
		std::cin >> command;
		if (command == "ADD")
			pb.add();
	//	pb.debug_contacts();
		else
			std::cout << "oui" << std::endl;
	}

	return (0);
}