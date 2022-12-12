/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:12:19 by repinat           #+#    #+#             */
/*   Updated: 2022/12/12 16:56:17 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"
#include <iostream>

class Phonebook
{
public:

	Phonebook(void);
	~Phonebook(void);

	void	setContact(Contact contact);

	Contact	getContact(int index) const;
	int	getCount(void) const;

private:

	Contact contacts[8];
	int index;
	int counter;
};

#endif