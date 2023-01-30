/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:58:55 by repinat           #+#    #+#             */
/*   Updated: 2023/01/26 13:43:45 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
public :

	Brain(void);
	Brain(Brain const &src);
	~Brain(void);

	Brain	&operator=(Brain const &src);

	std::string	getIdeas(int index) const;

private :
	std::string	ideas[100];
};

#endif