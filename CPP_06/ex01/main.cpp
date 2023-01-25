/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:06:44 by repinat           #+#    #+#             */
/*   Updated: 2023/01/17 15:35:03 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data	_data;
	uintptr_t	serialized;
	Data	*deserialized;
	
	_data.data = 42;
	serialized = serialize(&_data);
	deserialized = deserialize(serialized);

	if (deserialized->data = 42)
		std::cout << "Data: " << deserialized->data << " - Succes !" << std::endl;
	else
		std::cout << "Error !" << std::endl;
		
	
	return 0;
}